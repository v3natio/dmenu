/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; // -b  option; if 0, dmenu appears at bottom
static int centered = 1; // -c option; centers dmenu on screen
static int min_width = 1000; // minimum width when centered
static const float menu_height_ratio = 4.0f; // ratio used in the original calculation
static const unsigned int alpha = 0xff; // opacity, 0xff is opaque
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "JetbrainsMono Nerd Font:size=13:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
  /* foreground, background */ 
  [SchemeNorm] = { "#928374", "#282828" },
  [SchemeSel] = { "#282828", "#928374" },
  [SchemeSelHighlight] = { "#fabd2f", "#928374" },
  [SchemeNormHighlight] = { "#fabd2f", "#282828" },
  //[SchemeOut] = { "#000000", "#00ffff" },
  //[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
