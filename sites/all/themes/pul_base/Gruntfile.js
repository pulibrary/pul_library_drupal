module.exports = function (grunt) {

  "use strict";
  // Load tasks automatically with 'load-grunt-tasks' plugin.
  require('load-grunt-tasks')(grunt);
  // Define our theme directory
  var themeDir = '../pul_base';
  // Dependencies from Bower
  var libraries = ['libraries'];
  // Define the CSS files we want compiled from SCSS files
  var sassFiles = {};
  sassFiles[themeDir + '/css/pul-base.styles.css'] = themeDir + '/sass/pul-base.styles.scss';
  // require("matchdep").filterDev("grunt-*").forEach(grunt.loadNpmTasks);

  grunt.initConfig({

    pkg: grunt.file.readJSON('package.json'),

      imagemin: {
         dist: {
            options: {
              optimizationLevel: 5
            },
            files: [{
               expand: true,
               cwd: 'images',
               src: ['**/*.{png,jpg,gif}'],
               dest: 'images/'
            }]
         }
      },

      sass_globbing: {
        your_target: {
          files: {
            'sass/variables/_variables.scss': 'sass/variables/**/*.scss',
            'sass/abstractions/_abstractions.scss': 'sass/abstractions/**/*.scss',
            'sass/base/_base.scss': 'sass/base/**/*.scss',
            'sass/components/_components.scss': 'sass/components/**/*.scss',
            'sass/layouts/_layouts.scss': 'sass/layouts/**/*.scss'
          },
          options: {
            useSingleQuotes: false
          }
        }
      },

      autoprefixer: {
        options: {
            browsers: ['last 3 versions', 'ie 9', '> 5%', 'iOS > 7']
        },
        main: {
            expand: true,
            flatten: true,
            src: 'css/*.css',
            dest: 'css/'
        }
      },

      watch: {
        // options: {
        //   livereload: true
        // },
        sass: {
          files: 'sass/**/*.scss',
          tasks: ['sass:dist'] //change to sass for libsass; compass for compass
        }
      },

      cssc: {
        build: {
          options: {
              sortSelectors: true,
              lineBreaks: true,
              sortDeclarations:true,
              consolidateViaDeclarations:true,
              consolidateViaSelectors:true,
              consolidateMediaQueries:true,
              sort:true,
              safe:true
          },
          files: {
              'snippets/pul-base.libguides.css': 'css/pul-base.libguides.css',
              'snippets/pul-base.illiad.css': 'css/pul-base.illiad.css',
          }
        }
      },

      cssmin: {
        build: {
          files: {
            'snippets/pul-base.libguides.min.css' : 'snippets/pul-base.libguides.css',
            'snippets/pul-base.illiad.min.css' : 'snippets/pul-base.illiad.css',
          }
        }
      },

      compass: {
        options: {
          bundleExec: true,
          quiet: true
        },
        build: {
          options: {
            environment: 'production',
            sassDir: 'sass',
            cssDir: 'css'
          }
        }
      },

      // libsass compiler
      sass: {
        options: {
          sourceMap: true
        },
        dist: {
          files: {
            'css/pul-base.styles.css': 'sass/pul-base.styles.scss'
          }
        }
      },

      jshint: {
        options: {
          jshintrc: '.jshintrc'
        },
        all: ['js/{,**/}*.js', '!js/{,**/}*.min.js']
      },

      shell: {
        all: {
          command: 'drush cache-clear theme-registry'
        }
      }

  });

  grunt.registerTask('default', ['sass_globbing','sass:dist']);
  grunt.registerTask('build', ['sass_globbing','sass', 'autoprefixer', 'imagemin','shell']); //change to sass for libsass; compass for compass
  grunt.registerTask('tigerstyle',  ['build', 'cssc', 'cssmin']);

};
