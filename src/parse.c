#include <stdio.h>
#include <stdbool.h>

#include "parse.h"


bool stringCompare(char *stringA, char *stringB) {
	bool isEqual = false;

	while(*stringA != '\0' && *stringB != '\0') {

		if (*stringA != *stringB) {
			isEqual = false;
			return isEqual;
		}

		isEqual = true;
		stringA += 1;
		stringB += 1;
	}
	
	if(isEqual) {
		isEqual = (*stringA == '\0') && (*stringB == '\0');
	}
	return isEqual;
}

void removeImplicitNewLine(char* implicitNewLineString) {
	while(*implicitNewLineString != '\0') {
		if(implicitNewLineString[0] == '\n' && implicitNewLineString[1] == '\0') {
			implicitNewLineString[0] = '\0';
			implicitNewLineString[1] = '\n';
			break;
		}
		implicitNewLineString += 1;
	}
	return;
}