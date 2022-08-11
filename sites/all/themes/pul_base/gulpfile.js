// Load in gulp
var gulp = require("gulp");

// set permissions
var chmod = require("gulp-chmod");

// Load in config JSON
var config = require("./build.config.json");

// Load all plugins into the p variable
var p = require("gulp-load-plugins")();

// Load delete module to clean public assets directory
var del = require("del");

// Load linters
var scsslint = require("gulp-sass-lint");

// Growl-like Notifier
var notify = require("gulp-notify");

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
  del([config.assets.dest]);
  done();
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
    .pipe(p.plumber({ errorHandler: onError }))
    .pipe(p.sourcemaps.init())
    .pipe(
      p.sass({
        includePaths: [
          require("node-normalize-scss").includePaths,
          require("bourbon").includePaths,
          "./node_modules/susy/sass",
          "./node_modules/breakpoint-sass/stylesheets"
        ]
      })
    )
    .pipe(
      p.autoprefixer()
    )
    .pipe(p.cssmin())
    .pipe(p.rename({ suffix: ".min" }))
    .pipe(p.sourcemaps.write("."))
    .pipe(chmod(644))
    .pipe(gulp.dest(config.styles.dest))
  done();
});

/**
 * Gulp task: lint:scss
 * SCSS Linter
 */
gulp.task("lint:scss", function() {
  return gulp
    .src(config.styles.files)
    .pipe(p.plumber({ errorHandler: onError }))
    .pipe(scsslint())
    .pipe(scsslint.format())
    .pipe(scsslint.failOnError());
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
    .pipe(p.concat("pul-base.scripts.js"))
    .pipe(p.uglify())
    .on("error", function(err) {
      p.util.log(p.util.colors.red("[Error]"), err.toString());
    })
    .pipe(p.rename("pul-base.scripts.min.js"))
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
      p.imagemin({
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
gulp.task('deploy', gulp.series('clean', 'lint:scss', 'styles', 'scripts', 'fonts', 'images', function (done) {
  done();
}));
