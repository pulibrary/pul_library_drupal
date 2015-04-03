module.exports = function (grunt) {

  "use strict";

  require("matchdep").filterDev("grunt-*").forEach(grunt.loadNpmTasks);

  grunt.initConfig({

    pkg: grunt.file.readJSON('package.json'),

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
        options: {
          livereload: true
        },
        sass: {
          files: 'sass/**/*.scss',
          tasks: ['compass'] //change to sass for libsass
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

      //libsass compiler
      // sass: {
      //   options: {
      //     sourceMap: true
      //   },
      //   dist: {
      //     files: {
      //       'pul-base.styles.css': 'pul-base.styles.scss'
      //     }
      //   }
      // },

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

  grunt.registerTask('default',   ['watch']);
  grunt.registerTask('build', ['compass', 'autoprefixer', 'shell']); //change to sass for libsass
  grunt.registerTask('tigerstyle',  ['build', 'cssc', 'cssmin']);

};
