//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"    ", "echo $(cat /sys/class/power_supply/BAT1/capacity)%", 5, 0}, 
	{"  ", "echo $((100-$(vmstat | tail -1 | awk '{print $15}')))%", 30, 0}, 
	{"  ", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0},

	{"  ", "date '+%I:%M %p '",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
