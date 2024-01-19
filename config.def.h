/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
    font,
};

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char outfgcolor[]  = "#000000";
static char outbgcolor[]  = "#00ffff";
static char normhighlfgcolor[] = "#000000";
static char normhighlbgcolor[] = "#00ffff";
static char selbordercolor[] = "#00ffff";
static char selhighlfgcolor[]  = "#000000";
static char selhighlbgcolor[]  = "#00ffff";
static char *colors[SchemeLast][2] = {
	/*                        fg                bg       */
   	[SchemeNorm]          = { normfgcolor,      normbgcolor },
	[SchemeSel]           = { selfgcolor,       selbgcolor },
	[SchemeOut]           = { outfgcolor,       outbgcolor },
    [SchemeBorder]        = { selbordercolor,   NULL },
	[SchemeNormHighlight] = { normhighlfgcolor, normhighlbgcolor },
	[SchemeSelHighlight]  = { selhighlfgcolor,  selhighlbgcolor },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",             STRING, &font },
	{ "normfgcolor",      STRING, &normfgcolor },
	{ "normbgcolor",      STRING, &normbgcolor },
	{ "selfgcolor",       STRING, &selfgcolor },
	{ "selbgcolor",       STRING, &selbgcolor },
    { "outfgcolor",       STRING, &outfgcolor },
    { "outbgcolor",       STRING, &outbgcolor },
    { "normhighlfgcolor", STRING, &normhighlfgcolor },
    { "normhighlbgcolor", STRING, &normhighlbgcolor },
    { "selbordercolor",   STRING, &selbordercolor },
    { "selhighlfgcolor",  STRING, &selhighlfgcolor },
    { "selhighlbgcolor",  STRING, &selhighlbgcolor },
	{ "prompt",           STRING, &prompt },
};
