section .data
    hello db "Hello, Holberton",10,0  ; The string to print with newline and null terminator

section .text
    global main

extern printf

main:
    mov rdi, hello       ; Load the address of the string into rdi
    call printf         ; Call printf function to print the string
    ret

