#include "xidlescripts.h"
#include "helperFunctions.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>


int main(int argc, char* argv[]) {
	exec_command_name = argv[0];
	parameters params={
		.verbose=false,
		.silent=false,
		.interval=1
	};

	parseArguments(&params, argc, argv);
	PRINTV("verbose: %d, quiet: %d", params.verbose, 2999/1000);
}

void parseArguments(parameters *params, int argc, char *argv[]) {
	char opt;
	while((opt = getopt(argc, argv, "HhVvq")) != -1) {
		switch(opt) {
			case 'H':
			case 'h':
				printf(HELP, exec_command_name);
				exit(0);
			case 'V':
				printf(VERSIONFORMATED);
				exit(0);
			case 'v':
				params->verbose = true;
				params->silent  = false;
				break;
			case 'q':
				params->silent  = true;
				params->verbose = false;
				break;
			default:
				fprintf(stderr, HELP, exec_command_name);
				exit(1);
		}
	}
}
