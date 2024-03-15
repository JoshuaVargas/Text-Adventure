#include <stdio.h>



int main(int argc, char *argv[]) {

	printf("Zealot\n");
	printf("a horror command-line text adventure\n");
	printf("by Joshua Vargas\n");

	char inputBuffer[1028] = {0};
	fgets(inputBuffer, 1028, stdin);

	printf("%s\n", inputBuffer);

	return 0;
}