#ifndef _HELPER_FUNCTIONS_H_
#define _HELPER_FUNCTIONS_H_

//inline functions
static inline void displayHelpMessage(const char *exec_prog_name);
static inline void displayVersion();

//macros
#define PRINTV if(params.verbose) printf

//help message, PROGNAME should be defined atm at xidlescripts.h
#define HELPMSG \
	"USAGE: %s [-hHV]"                                                            "\n" \
	"   -h and -H"                                                                "\n" \
	"        displays this help message"                                          "\n" \
	"   -v"                                                                       "\n" \
	"        produce more output ;)"                                              "\n" \
	"   -q"                                                                       "\n" \
	"        don't produce any output, except error messages"                     "\n" \
	"   -V"                                                                       "\n" \
	"        prints version number and authors"                                   "\n" \
	""                                                                            "\n" \
	"executes script after specified X11 idle times"                              "\n" \
	"the script should be located at ~/." PROGNAME "rc and have to be named as:"  "\n" \
	"   <minutes>.sh (without leading zeros)"                                     "\n" \
	"notice: scripts without executable flag are ignored"                         "\n"

//help
typedef struct parameter parameter;
struct parameter {
	const char *desc;
	const char option;
	const int argc;
	char *args[];
	bool value;
};

#endif
