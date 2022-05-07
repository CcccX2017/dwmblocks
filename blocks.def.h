//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/    /*Command*/     /*Update Interval*/     /*Update Signal*/
        /*{"",         "dwm_nettraf",           1,      			1},*/
        {"",         "dwm_disk",              1800,      		4},
        {"",         "dwm_battery",           10,      			3},
        {"",         "dwm_vol",               0,      			7},
        {"",         "dwm_datetime",          1,      			2},
	{"",         "dwm_update",            0,                        9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
