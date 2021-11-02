CC=nasm
LD=ld
X86FLAGS= -f elf32
X86LDFLAGS= -m elf_i386 -dynamic-linker /lib/ld-linux.so.2 -lc
X64FLAGS= -f elf64
X64LDFLAGS= -dynamic-linker /lib64/ld-linux-x86-64.so.2 -lc

all: callx86 callx64

callx86: 
	$(CC) $(X86FLAGS) -o callx86.o callx86.asm
	$(LD) $(X86LDFLAGS) -o callx86 callx86.o
callx64:
	$(CC) $(X64FLAGS) -o callx64.o callx64.asm
	$(LD) $(X64LDFLAGS) -o callx64 callx64.o

clean:
	rm callx86 callx86.o callx64 callx64.o

