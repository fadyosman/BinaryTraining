CC=gcc
CFLAGS= -m32 -ggdb -fno-stack-protector -z execstack

vuln.bin: 
	$(CC) main.c -o vuln.bin $(CFLAGS)

all: vuln.bin

clean:
	rm vuln.bin

