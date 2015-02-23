#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char* argv[]) {
	prog_name = argv[0];

	char opt;
	while((opt = getopt(argc, argv, "HhV")) != -1) {
		switch(opt) {
			case 'H':
			case 'h':
				printf(HELP, prog_name, prog_name);
				exit(0);
			case 'V':
				printf(VERSIONFORMATED, prog_name);
				exit(0);
			default:
				fprintf(stderr, HELP, prog_name, prog_name);
				exit(1);
		}
	}
}
