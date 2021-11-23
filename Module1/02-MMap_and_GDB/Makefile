CC=gcc
CFLAGS= -m32 -ggdb

1.bin: 
	$(CC) main.c -o 1.bin $(CFLAGS)
2.bin: 
	$(CC) main2.c -o 2.bin $(CFLAGS)

all: 1.bin 2.bin

clean:
	rm 1.bin 2.bin

