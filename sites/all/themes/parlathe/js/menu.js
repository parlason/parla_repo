/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

(function ($, Drupal, window, document, undefined) {
$(document).ready(function(){  
$( "#recordings" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/recordings';
	window.location = url_address;
});
$( "#recordings-da" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/da' + '/recordings';
	window.location = url_address;
});
$( "#recordings-es" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/es' + '/recordings';
	window.location = url_address;
});
$( "#video" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/video';
	window.location = url_address;
});
$( "#video-da" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/da' + '/video';
	window.location = url_address;
});
$( "#video-es" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/es' + '/video';
	window.location = url_address;
});
$( "#blog" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/blog';
	window.location = url_address;
});
$( "#blog-da" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/da' + '/blog';
	window.location = url_address;
});
$( "#blog-es" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/es' + '/blog';
	window.location = url_address;
});
$( "#contact" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/contact';
	window.location = url_address;
});
$( "#contact-da" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/da' + '/contact';
	window.location = url_address;
});
$( "#contact-es" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/es' + '/contact';
	window.location = url_address;
});
$( "#viaartis" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host;
	window.location = url_address;
});
$( "#viaartis-da" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/da';
	window.location = url_address;
});
$( "#viaartis-es" ).click(function() {
	var url_address = window.location.protocol + "//" + window.location.host + '/es';
	window.location = url_address;
});
});


})(jQuery, Drupal, this, this.document);


