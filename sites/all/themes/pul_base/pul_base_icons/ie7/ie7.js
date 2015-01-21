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
		'icon-article-express--caps': '&#xe612;',
		'icon-article-express--caps-skew': '&#xe613;',
		'icon-article-express--small-skew': '&#xe614;',
		'icon-article-express--small': '&#xe615;',
		'icon-chat': '&#xe603;',
		'icon-phone': '&#xe60e;',
		'icon-user': '&#xe60f;',
		'icon-articles': '&#xe605;',
		'icon-file': '&#xe606;',
		'icon-location': '&#xe618;',
		'icon-warning-sign': '&#xe610;',
		'icon-film': '&#xe616;',
		'icon-headphones': '&#xe617;',
		'icon-tag': '&#xf02b;',
		'icon-plus-sign-alt': '&#xf055;',
		'icon-minus-sign-alt': '&#xf056;',
		'icon-caret-left': '&#xf0d9;',
		'icon-caret-right': '&#xf0da;',
		'icon-spinner': '&#xf110;',
		'icon-question': '&#xf128;',
		'icon-exclamation': '&#xf12a;',
		'icon-home': '&#xe607;',
		'icon-image': '&#xe611;',
		'icon-Wi-Fi': '&#xe61c;',
		'icon-library': '&#xe609;',
		'icon-Copiers': '&#xe619;',
		'icon-clock': '&#xe60a;',
		'icon-calendar': '&#xe60b;',
		'icon-Printers': '&#xe61a;',
		'icon-Computers': '&#xe61b;',
		'icon-newtab': '&#xe608;',
		'icon-search': '&#xe60c;',
		'icon-email': '&#xe60d;',
		'icon-book': '&#xe61d;',
		'icon-arrow-left': '&#xe600;',
		'icon-arrow-down': '&#xe601;',
		'icon-arrow-up': '&#xe602;',
		'icon-arrow-right': '&#xe604;',
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
