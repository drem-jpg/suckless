/* user and group to drop privileges to */
static const char *user  = "max";
static const char *group = "max";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1e2127",     /* after initialization */
	[INPUT] =  "#61afef",   /* during input */
	[FAILED] = "#e06c75",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
