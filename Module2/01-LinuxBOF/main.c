#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void injectJmpEsp() {
	//Injecting jmp esp for demonstration purposes.
	asm("jmp *%esp");
	exit(0);
}

void canYouCallMe() {
	printf("I am dead code.\n");
	exit(0);
}

void vuln(char *buf) {
	char x[16];
	strcpy(x, buf);
}

int main(int argc, char **argv) {
	vuln(argv[1]);
}
