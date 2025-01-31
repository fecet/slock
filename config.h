/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#282a36",   /* during input */
	[FAILED] = "#ff5555",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "None are more hopelessly enslaved than those who falsely believe they are free";
//static const char * message = "Greatness, at any cost";

/* text color */
static const char * text_color = "#bd93f9";

/* text size (must be a valid size) */
static const char * text_size = "lucidasanstypewriter-bold-24";
