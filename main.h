#ifndef _MAIN_H
#define _MAIN_H

#define VERSION "0.0.1-pre"
#define VERSIONFORMATED "%s version: " VERSION " by:\n\n" AUTHOR

#define AUTHOR \
	"2015 - Markus Mr. <github-contact@mr-pi.de>" "\n"

#define HELP \
	"USAGE %s [-hHV]"                                                             "\n" \
	                                                                              "\n" \
	"executes script after specified X11 idle times"                              "\n" \
	"the script should be located at ~/.%src and have to be named as:"            "\n" \
	"   <minutes>.sh (without leading zeros)"                                     "\n" \
	"notice: scripts without executable flag are ignored"                         "\n"


const char *prog_name;

#endif
