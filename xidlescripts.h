#ifndef _XIDLESCRIPTS_H_
#define _XIDLESCRIPTS_H_

#define PROGNAME "xidlescripts"

#define VERSION "0.0.1-pre"
#define VERSIONFORMATED PROGNAME " version: " VERSION " by:\n\n" AUTHOR

#define AUTHOR \
	"2015 - Markus Mr. <github-contact@mr-pi.de>" "\n"




//functions
void parseArguments(parameters *params, int argc, char *argv[]);


//global vars
const char *exec_command_name;


#endif
