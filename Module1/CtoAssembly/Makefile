CC=gcc
CFLAGS= -m32 -ggdb -masm=intel -O0

all: main.bin

main.bin: 
	$(CC) main.c -save-temps -o main.bin $(CFLAGS)

clean:
	rm main.s main.o main.bin main.i

