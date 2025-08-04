/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; // -b  option; if 0, dmenu appears at bottom
static int centered = 1; // -c option; centers dmenu on screen
static int min_width = 500; // minimum width when centered
static const float menu_height_ratio = 4.0f; // ratio used in the original calculation
static const unsigned int alpha = 0xff; // opacity, 0xff is opaque
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "JetbrainsMono Nerd Font:size=15:antialias=true:autohint=true";
static const char *fonts[] = {
  font,
	"JetbrainsMono Nerd Font:size=15:antialias=true:autohint=true",
};
static char *prompt = NULL; // -p  option; prompt to the left of input field

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[] = "#eeeeee";
static char selbgcolor[] = "#005577";
static char normhlcolor[] = "#fabd2f";
static char selhlcolor[] = "#fabd2f";
static char outfgcolor[] = "#000000";
static char outbgcolor[] = "#00ffff";
static char outhlcolor[] = "#ffc978";
static char *colors[SchemeLast][2] = {
  /* foreground, background */
  [SchemeNorm] = { normfgcolor, normbgcolor },
  [SchemeSel] = { selfgcolor, selbgcolor },
  [SchemeNormHighlight] = { normhlcolor, normbgcolor },
  [SchemeSelHighlight] = { selhlcolor, selbgcolor },
  [SchemeOut] = { outfgcolor, outbgcolor },
  [SchemeOutHighlight] = { outhlcolor, outbgcolor },
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

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
  { "font", STRING, &font },
  { "prompt", STRING, &prompt },
  { "color8", STRING, &normfgcolor },
  { "color0", STRING, &normbgcolor },
  { "color0", STRING, &selfgcolor },
  { "color8", STRING, &selbgcolor },
  { "color10", STRING, &normhlcolor },
  { "color10", STRING, &selhlcolor },
  { "outfgcolor", STRING, &outfgcolor },
  { "outbgcolor", STRING, &outbgcolor },
  { "outhlcolor", STRING, &outhlcolor },
};
