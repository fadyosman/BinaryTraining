#include <stdio.h>

int main(int argc, char **argv) {
	int i;
	printf("[*] Enter the index you want to read:\n");
	scanf("%d", &i);
	char *x = "ABCDEFGHIJKLMNOPQRSTQWXYZ";
	printf("0x%x\n", x[i]);
	return 0;
}
