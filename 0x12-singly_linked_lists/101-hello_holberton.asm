section .data
hello db "Hello, Holberton",10,0  ;

section .text
global _start

extern printf

_start:
mov rdi, format  ;
mov rsi, hello   ;
call printf

mov rax, 60      ;
xor rdi, rdi     ;
syscall

section .data
format db "%s",0  ;

