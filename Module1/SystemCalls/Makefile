CC=nasm
LD=ld
X86FLAGS= -f elf32
X86LDFLAGS= -m elf_i386
X64FLAGS= -f elf64
all: x86calling x64calling

x86calling: 
	$(CC) $(X86FLAGS) -o x86syscalls.o x86syscalls.asm
	$(LD) $(X86LDFLAGS) -o x86syscalls x86syscalls.o
x64calling:
	$(CC) $(X64FLAGS) -o x64syscalls.o x64syscalls.asm
	$(LD) -o x64syscalls x64syscalls.o

clean:
	rm x86syscalls x86syscalls.o x64syscalls x64syscalls.o

