/* To avoid CSS expressions while still supporting IE 7 and IE 6, use this script */
/* The script tag referencing this file must be placed before the ending body tag. */

/* Use conditional comments in order to target IE 7 and older:
	<!--[if lt IE 8]><!-->
	<script src="ie7/ie7.js"></script>
	<!--<![endif]-->
*/

(function() {
	function addIcon(el, entity) {
		var html = el.innerHTML;
		el.innerHTML = '<span style="font-family: \'pul-icons\'">' + entity + '</span>' + html;
	}
	var icons = {
		'icon-article-express--small': '&#xe61d;',
		'icon-plus-sign-alt': '&#xe910;',
		'icon-down': '&#xe908;',
		'icon-right': '&#xe909;',
		'icon-caret-left': '&#xe911;',
		'icon-caret-right': '&#xe912;',
		'icon-bookmark': '&#xe901;',
		'icon-bookslibrary': '&#xe907;',
		'icon-moveback': '&#xe904;',
		'icon-cite': '&#xe902;',
		'icon-search': '&#xe90b;',
		'icon-share': '&#xe903;',
		'icon-minus-sign-alt': '&#xe91a;',
		'icon-refresh': '&#xe906;',
		'icon-senior-thesis': '&#xe600;',
		'icon-data-file': '&#xe601;',
		'icon-map': '&#xe602;',
		'icon-manuscript': '&#xe603;',
		'icon-audio': '&#xe604;',
		'icon-musical-score': '&#xe605;',
		'icon-video-projected-medium': '&#xe606;',
		'icon-visual-material': '&#xe607;',
		'icon-toggle.collapsed': '&#xe608;',
		'icon-remove': '&#xe609;',
		'icon-toggle': '&#xe60a;',
		'icon-book': '&#xe60b;',
		'icon-journal': '&#xe60c;',
		'icon-mixed-material': '&#xe60d;',
		'icon-dissertation': '&#xe60e;',
		'icon-unknown': '&#xe60f;',
		'icon-databases': '&#xec2b;',
		'icon-text': '&#xec40;',
		'icon-library': '&#xefa3;',
		'icon-web': '&#xefbe;',
		'icon-home': '&#xefc1;',
		'icon-compass': '&#xefd5;',
		'icon-location': '&#xeff3;',
		'icon-guide': '&#xf04a;',
		'icon-windows': '&#xf0fd;',
		'icon-cd': '&#xf2f3;',
		'icon-lp': '&#xf2f4;',
		'icon-question': '&#xf558;',
		'icon-best-bet': '&#xf580;',
		'icon-archives': '&#xf5f5;',
		'icon-collections': '&#xf5fa;',
		'icon-newspaper': '&#xf608;',
		'icon-newtab': '&#xf639;',
		'icon-mobile': '&#xf690;',
		'icon-phone': '&#xf6a4;',
		'icon-phone-book': '&#xf6a8;',
		'icon-chat': '&#xf728;',
		'icon-staff': '&#xf785;',
		'icon-email': '&#xf813;',
		'icon-calendar': '&#xf82c;',
		'icon-clock': '&#xf82e;',
		'icon-links': '&#xf87f;',
		'icon-print': '&#xf893;',
		'icon-digital': '&#xe91e;',
		'icon-film': '&#xe920;',
		'icon-add-box': '&#xe921;',
		'icon-warning': '&#xe90e;',
		'icon-spinner': '&#xe905;',
		'icon-rssfeed': '&#xe900;',
		'0': 0
		},
		els = document.getElementsByTagName('*'),
		i, c, el;
	for (i = 0; ; i += 1) {
		el = els[i];
		if(!el) {
			break;
		}
		c = el.className;
		c = c.match(/icon-[^\s'"]+/);
		if (c && icons[c[0]]) {
			addIcon(el, icons[c[0]]);
		}
	}
}());
