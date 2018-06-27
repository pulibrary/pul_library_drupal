﻿/*
 Copyright (c) 2014-2018, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.md or https://ckeditor.com/license
*/
(function(){CKEDITOR.plugins.a11ychecker.quickFixes.get({langCode:"pt-br",name:"ElementReplace",callback:function(f){function e(b){f.call(this,b)}e.prototype=new f;e.prototype.constructor=e;e.prototype.getTargetName=function(b){return b.level};e.prototype.display=function(b,a){var d=this._getFormHeaderLeves(a);b.setInputs({level:{type:"select",label:this.lang.levelLabel,value:"h"+this._getPreferredLevel(a),options:d}})};e.prototype.fix=function(b,a){var d=this;f.prototype.fix.call(this,b,function(){d._removeBoldTag();
a(d)})};e.prototype._getPreferredLevel=function(b){var a=1,d=b.editable();b=/^h[1-6]$/i;var c=new CKEDITOR.dom.range(d.getDocument());c.setStartAt(d,CKEDITOR.POSITION_AFTER_START);c.setEndAt(this.issue.element,CKEDITOR.POSITION_BEFORE_START);for(d=new CKEDITOR.dom.walker(c);c=d.previous();)if(c.getName&&c.getName().match(b)){a=Number(c.getName()[1])+1;break}return Math.min(a,6)};e.prototype._removeBoldTag=function(){var b=function(a){return a.type===CKEDITOR.NODE_ELEMENT},a=this.issue.element,d=a.getFirst(b),
c=["strong","b"];d&&d.equals(a.getLast(b))&&-1!==CKEDITOR.tools.indexOf(c,d.getName())&&(d.moveChildren(a),d.remove())};e.prototype._getPossibleLevels=function(b){var a=(b.config.format_tags||"").split(";"),d={min:1,max:6},c;for(c=a.length-1;0<=c;c--)a[c].match(/^h[1-6]$/i)&&b.filter.check(a[c])?a[c]=Number(a[c][1]):a.splice(c,1);a.length&&(a.sort(),d.min=a[0],d.max=a[a.length-1]);return d};e.prototype._getFormHeaderLeves=function(b){var a={},d=this._getPossibleLevels(b);b=this._getPreferredLevel(b);
for(var c=d.min;c<=d.max;c++)a["h"+c]="H"+c;a["h"+b]&&(a["h"+b]+=" "+this.lang.suggested);return a};e.prototype.lang={levelLabel:"Nível de cabeçalho",suggested:"(Sugerido)"};CKEDITOR.plugins.a11ychecker.quickFixes.add("pt-br/ParagraphToHeader",e)}})})();