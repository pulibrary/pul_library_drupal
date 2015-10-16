module.exports = function(grunt) {

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

        svgmin: { //minimize SVG files
            options: {
                plugins: [{
                    removeViewBox: false
                }, {
                    removeUselessStrokeAndFill: false
                }]
            },
            dist: {
                expand: true,
                cwd: 'svg_icons/raw',
                src: ['*.svg'],
                dest: 'svg_icons/compressed',
                ext: '.svg'
            }
        },

        grunticon: { //makes SVG icons into a CSS file
            myIcons: {
                files: [{
                    expand: true,
                    cwd: 'svg_icons/compressed',
                    src: ['*.svg'],
                    dest: 'svg_icons/output'
                }],
                options: {
                    cssprefix: '.icon-',
                }
            }
        },

        sass_globbing: {
            your_target: {
                files: {
                    'sass/base/_base.scss': 'sass/base/**/*.scss',
                    'sass/components/_components.scss': 'sass/components/**/*.scss',
                    'sass/layouts/_layouts.scss': 'sass/layouts/**/*.scss',
                    'sass/sites/_sites.scss': 'sass/sites/**/*.scss',
                    'sass/themes/_themes.scss': 'sass/themes/**/*.scss',
                    'sass/utils/_utils.scss': 'sass/utils/**/*.scss'
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
            options: {
                livereload: true
            },
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
                    sortDeclarations: true,
                    consolidateViaDeclarations: true,
                    consolidateViaSelectors: true,
                    consolidateMediaQueries: true,
                    sort: true,
                    safe: true
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
                    'snippets/pul-base.libguides.min.css': 'snippets/pul-base.libguides.css',
                    'snippets/pul-base.illiad.min.css': 'snippets/pul-base.illiad.css',
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
                    'css/pul-base.styles.css': 'sass/pul-base.styles.scss',
                    'css/pul-base.layouts.css': 'sass/pul-base.layouts.scss',
                    'css/pul-base.libguides.css': 'sass/pul-base.libguides.scss',
                    'css/pul-base.illiad.css': 'sass/pul-base.illiad.scss'
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

    grunt.registerTask('default', ['sass_globbing', 'sass:dist', 'watch']);
    grunt.registerTask('build', ['sass_globbing', 'sass', 'autoprefixer', 'imagemin', 'shell']); //change to sass for libsass; compass for compass
    grunt.registerTask('icons', ['svgmin', 'grunticon']);
    grunt.registerTask('tigerstyle', ['build', 'cssc', 'cssmin']);

};
