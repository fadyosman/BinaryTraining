#include <stdio.h>

int add(int i, int j);

int main(int argc, char **argv) {
	int x = 1;
	int y = 2;
	int sum = add(x,y);
	printf("%d\n", sum);
}

int add(int i, int j) {
	return i+j;
}	
