//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        //{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",   30,            0},

        { "","netraff"                                          ,1,             0},
        {"", "brightnessctl -m -d amdgpu_bl0 | cut -f 4 -d , | tr -d %",       0,             9},
        { "","volume-nt.sh"                                             ,0,             10},
        {"", "cat /sys/class/power_supply/BAT1/capacity",              60,             0},
        {"", "date '+%I:%M %p'",                                        30,             0},
};


//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
