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
		el.innerHTML = '<span style="font-family: \'pul_base_theme\'">' + entity + '</span>' + html;
	}
	var icons = {
		'icon-library': '&#xe61e;',
		'icon-databases': '&#xe61f;',
		'icon-archives': '&#xe627;',
		'icon-collections': '&#xe628;',
		'icon-articles': '&#xe629;',
		'icon-text': '&#xe62a;',
		'icon-windows': '&#xe62d;',
		'icon-chat': '&#xe601;',
		'icon-calendar': '&#xe620;',
		'icon-clock': '&#xe622;',
		'icon-staff': '&#xe623;',
		'icon-item': '&#xe630;',
		'icon-compass': '&#xe602;',
		'icon-audio': '&#xe91e;',
		'icon-books': '&#xe920;',
		'icon-web': '&#xe9c9;',
		'icon-file': '&#xe600;',
		'icon-right': '&#xe625;',
		'icon-down': '&#xe609;',
		'icon-alert': '&#xf02d;',
		'icon-digital': '&#xf094;',
		'icon-links': '&#xf05c;',
		'icon-mail': '&#xf03b;',
		'icon-article-express--caps': '&#xe612;',
		'icon-article-express--caps-skew': '&#xe613;',
		'icon-article-express--small-skew': '&#xe614;',
		'icon-article-express--small': '&#xe615;',
		'icon-phone': '&#xe60e;',
		'icon-location': '&#xe618;',
		'icon-film': '&#xe616;',
		'icon-plus-sign-alt': '&#xf055;',
		'icon-minus-sign-alt': '&#xf056;',
		'icon-caret-left': '&#xf0d9;',
		'icon-caret-right': '&#xf0da;',
		'icon-spinner': '&#xf110;',
		'icon-question': '&#xf128;',
		'icon-exclamation': '&#xf12a;',
		'icon-home': '&#xe607;',
		'icon-image': '&#xe611;',
		'icon-newtab': '&#xe608;',
		'icon-search': '&#xe60c;',
		'icon-guide': '&#xe654;',
		'icon-book': '&#xe61d;',
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
