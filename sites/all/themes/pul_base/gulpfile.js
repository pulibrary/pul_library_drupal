'use strict'

import gulp from 'gulp';
import {deleteAsync} from 'del';
import normalizeScss from 'node-normalize-scss';

import autoprefixer from 'gulp-autoprefixer';
import chmod from 'gulp-chmod';
import cleanCSS from 'gulp-clean-css';
import concat from 'gulp-concat';
import imagemin from 'gulp-imagemin';
import notify from 'gulp-notify';
import plumber from 'gulp-plumber';
import rename from 'gulp-rename';
import sourcemaps from 'gulp-sourcemaps';
import uglify from 'gulp-uglify';

const config = {
  "root": "./assets/public",
  "assets": {
    "base": "assets/source",
    "dest": "assets/public"
  },
  "scripts": {
    "base"  : "assets/source/scripts/",
    "vendor": "assets/source/scripts/vendor/**/*.js",
    "files" : [
      "assets/source/scripts/**/*.js",
      "!assets/source/scripts/vendor/*"
    ],
    "dest"  : "assets/public/scripts"
  },
  "styles": {
    "base" : "assets/source/styles/",
    "files": [
      "assets/source/styles/**/*.scss"
    ],
    "dest" : "assets/public/styles/"
  },
  "fonts": {
    "base" : "assets/source/fonts/",
    "files": [
      "assets/source/fonts/**/*"
    ],
    "dest" : "assets/public/fonts/"
  },
  "images": {
    "base" : "assets/source/images/",
    "files": [
      "assets/source/images/**/*"
    ],
    "dest" : "assets/public/images/"
  }
}

// Sass compiler 
import dartSass from 'sass';
import gulpSass from 'gulp-sass';
const sass = gulpSass(dartSass);

// Error handling
var onError = function(err) {
  notify.onError({
    title: "Gulp",
    subtitle: "Error!",
    message: "<%= error.message %>",
    sound: "Frog"
  })(err);
  this.emit("end");
};

/**
 * Gulp task: clean
 * Removes asset files before running other tasks
 */
gulp.task("clean", function(done) {
  deleteAsync([config.assets.dest]).then(done());
});

/**
 * Gulp task: styles
 * Compiles our Sass .scss files into CSS, and handles creation of CSS
 * sourcemaps for better dev tools debugging
 *
 * Note: gulp.dest() is used to drop copies of the generated files in both the
 * source/ and public/ directories -- otherwise the changes would be lost when
 * the Pattern Lab generator is run the next time...
 */
gulp.task("styles", function(done) {
  gulp
    .src(config.styles.files)
    .pipe(plumber({ errorHandler: onError }))
    .pipe(sourcemaps.init())
    .pipe(
      sass({
        includePaths: [
          normalizeScss.includePaths,
          "node_modules/bourbon/app/assets/stylesheets",
          "./node_modules/susy/sass",
          "./node_modules/breakpoint-sass/stylesheets"
        ]
      })
    )
    .pipe(
      autoprefixer()
    )
    .pipe(cleanCSS())
    .pipe(rename({ suffix: ".min" }))
    .pipe(sourcemaps.write("."))
    .pipe(chmod(644))
    .pipe(gulp.dest(config.styles.dest))
  done();
});

/**
 * I don't understand why this step is necessary,
 * but the CSS doesn't get generated properly
 * without it
 */
gulp.task("prepare-styles", function() {
  return gulp
    .src(config.styles.files);
});

/**
 * Gulp task: scripts
 * Concatenates our set of JS files into one scripts.js file, uglifies
 * (compresses) that file, and generates appropriate sourcemaps for better
 * debugging.
 *
 * Note: gulp.dest() is used to drop copies of the generated files in both the
 * source/ and public/ directories -- otherwise the changes would be lost when
 * the Pattern Lab generator is run the next time...
 */
gulp.task("scripts", function(done) {
  gulp
    .src(config.scripts.files)
    .pipe(concat("pul-base.scripts.js"))
    .pipe(uglify())
    .on("error", function(err) {
      p.util.log(p.util.colors.red("[Error]"), err.toString());
    })
    .pipe(rename("pul-base.scripts.min.js"))
    .pipe(chmod(644))
    .pipe(gulp.dest(config.scripts.dest));
  gulp
    .src(config.scripts.vendor)
    .pipe(chmod(644))
    .pipe(gulp.dest(config.scripts.dest))
  done()
});

/**
 * Gulp task: fonts
 * Copy fonts to public/ directory
 */
gulp.task("fonts", function(done) {
  gulp
    .src(config.fonts.files)
    .pipe(chmod(644))
    .pipe(gulp.dest(config.fonts.dest))
  done();
});

/**
 * Gulp task: images
 * Optimizes (compresses) images for performance.
 */
gulp.task("images", function(done) {
  gulp
    .src(config.images.files)
    .pipe(
      imagemin({
        progressive: true,
        optimizationLevel: 5,
        interlaced: true
      })
    )
    .pipe(chmod(644))
    .pipe(gulp.dest(config.images.dest))
  done();
});

/**
 * Gulp task: watch
 * Watches Pattern Lab files, styles, scripts, images, and fonts for changes
 */
gulp.task("watch", function() {
  gulp.watch(config.styles.files, ["styles", "lint:scss"]);
  gulp.watch(config.scripts.files, ["scripts"]);
  gulp.watch(config.images.files, ["images"]);
});

/**
 * Gulp task: styleguide
 * Copy styleguide folder from core/ to public/
 */
gulp.task("styleguide", function() {
  gulp
    .src(config.patternlab.styleguide.files)
    .pipe(gulp.dest(config.patternlab.styleguide.dest));
});

/**
 * Compile all assets
 */
gulp.task('deploy', gulp.series('clean', 'prepare-styles', 'styles', 'scripts', 'fonts', 'images', function (done) {
  done();
}));
