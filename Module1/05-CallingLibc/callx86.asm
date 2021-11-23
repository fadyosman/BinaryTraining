extern puts
extern exit

section .text
global _start

%macro call_func 1
    call %1
    add esp, 0x4
%endmacro

_start:
    push hello
    call_func puts

    mov eax, 0xa
    call exit

section .data
    hello db "Hello World"
