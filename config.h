//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"mem: ",	"memory",	10,	14},
	{"cpu: ",	"cpu",		10,	18},
	{"vol: ",	"volume",	0,	10},
	{"bat: ",	"battery",	5,	3},
	{"",		"clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";
static unsigned int delimLen = 5;
