#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
int main(int arg, char **argv) {
	long sz = sysconf(_SC_PAGESIZE);
	//Getting Page Size.
	printf("Page size (sysconf): %ld\n", sz);
	printf("Pagesize (getpagesize()): %d\n", getpagesize());
	//Allocate at 0x41414000.
	char *addr = mmap((void *)0x41414000, sz, PROT_EXEC|PROT_READ|PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);
	if(addr == MAP_FAILED) {
		printf("OOPS\n");
	}

	addr[0] = 'a';
	addr[1] = 'b';
	addr[2] = 'c';	
	return 0;
}
