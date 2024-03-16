#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "scenes.h"
#include "parse.h"

#define MAX_INPUT_CHARS 256

int main(int argc, char *argv[]) {
	bool gameIsRunning = true;
	char *options[256] = {"quit", "continue"};

	startScene();

	while(gameIsRunning) {
		char response[MAX_INPUT_CHARS];
		fgets(response, MAX_INPUT_CHARS, stdin);
		removeImplicitNewLine(response);

		if(response[0] == 'q' && response[1] == '\0') {
			gameIsRunning = false;
		} else if(stringCompare(response, options[0])) {
			gameIsRunning = false;
		}
	}

	return 0;
}