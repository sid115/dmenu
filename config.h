/* Default settings; can be overriden by command line. */

#include "colors.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */

static const char *prompt = NULL;           /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=14"
};

static const char *colors[SchemeLast][2] = {
	/*                        fg          bg         */
	[SchemeNorm]          = { d_white,    background },
	[SchemeSel]           = { d_white,    d_black },
	[SchemeSelHighlight]  = { d_blue,     d_black },
	[SchemeNormHighlight] = { d_blue,     background },
	[SchemeOut]           = { background, d_blue },
    [SchemeBorder]        = { d_blue,     NULL },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/* Characters not considered part of a word while deleting words */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
