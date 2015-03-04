module.exports = function (grunt) {

  "use strict";

  require("matchdep").filterDev("grunt-*").forEach(grunt.loadNpmTasks);

  grunt.initConfig({

    pkg: grunt.file.readJSON('package.json'),

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
          config: 'config.rb',
          bundleExec: true,
          force: true,
          debugInfo: false,
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

      jshint: {
        options: {
          jshintrc: '.jshintrc'
        },
        all: ['js/{,**/}*.js', '!js/{,**/}*.min.js']
      },

      watch: {
        css: {
          files: '**/*.scss',
          tasks: ['compass'],
          options: {
            livereload: true
          }
        }
      },

      shell: {
        all: {
          command: 'drush cache-clear theme-registry'
        }
      }

  });

  grunt.registerTask('default',   []);
  grunt.registerTask('build', ['compass', 'shell']);
  grunt.registerTask('tigerstyle',  ['build', 'cssc', 'cssmin']);

};
