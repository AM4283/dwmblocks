//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",    "sb-spotify",        5,   9}, 
    {"",    "sb-forecast",     600,   8},
    {"",    "sb-mem",           10,   5},
    {"",    "sb-cpu",           10,   4},
    {"",    "sb-microphone",     0,   3},
    {"",    "sb-pulsevol",       0,   2},
    {"",    "sb-redshift",       0,  10},
    {"",    "sb-backlight",      0,   6},
    {"",    "sb-networkstatus",  10, 11},
    {"",    "sb-battery",        5,   7},
    {"",    "sb-time",	         5,   1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
