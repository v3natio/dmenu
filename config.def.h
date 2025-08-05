/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; // -b  option; if 0, dmenu appears at bottom
static int centered = 1; // -c option; centers dmenu on screen
static int min_width = 500; // minimum width when centered
static const float menu_height_ratio = 4.0f; // ratio used in the original calculation
static const unsigned int alpha = 0xff; // opacity, 0xff is opaque
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
  font,
	"monospace:size=10",
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
static char curbgcolor[] = "#00ffff";
static char curhlcolor[] = "#ffc978";
static char *colors[SchemeLast][2] = {
  /* foreground, background */
  [SchemeNorm] = { normfgcolor, normbgcolor },
  [SchemeSel] = { selfgcolor, selbgcolor },
  [SchemeNormHighlight] = { normhlcolor, normbgcolor },
  [SchemeSelHighlight] = { selhlcolor, selbgcolor },
  [SchemeOut] = { outfgcolor, outbgcolor },
  [SchemeOutHighlight] = { outhlcolor, outbgcolor },
  [SchemeCursor] = { curhlcolor, curbgcolor},
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


/*
* -vi option; if nonzero, vi mode is always enabled and can be
* accessed with the global_esc keysym + mod mask
*/
static unsigned int vi_mode = 1;
static unsigned int start_mode = 0; /* mode to use when -vi is passed. 0 = insert mode, 1 = normal mode */
static Key global_esc = { XK_n, Mod1Mask };	/* escape key when vi mode is not enabled explicitly */
static Key quit_keys[] = {
  /* keysym	modifier */
  { XK_q,		0 }
};

/* Size of the window border */
static unsigned int border_width = 0;

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
  { "font", STRING, &font },
  { "prompt", STRING, &prompt },
  { "normfgcolor", STRING, &normfgcolor },
  { "normbgcolor", STRING, &normbgcolor },
  { "selfgcolor", STRING, &selfgcolor },
  { "selbgcolor", STRING, &selbgcolor },
  { "normhlcolor", STRING, &normhlcolor },
  { "selhlcolor", STRING, &selhlcolor },
  { "outfgcolor", STRING, &outfgcolor },
  { "outbgcolor", STRING, &outbgcolor },
  { "outhlcolor", STRING, &outhlcolor },
  { "curbgcolor", STRING, &curbgcolor },
  { "curhlcolor", STRING, &curhlcolor },
};
