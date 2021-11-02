section .text
global _start

_start:
    mov ebx, 0x1
    mov ecx, hello
    mov edx, helloLen
    mov eax, 0x4
    int 0x80

    xor ebx, ebx
    mov eax, 0x1
    int 0x80

section .data
    hello db "Hello World", 0xa
    helloLen equ $-hello
