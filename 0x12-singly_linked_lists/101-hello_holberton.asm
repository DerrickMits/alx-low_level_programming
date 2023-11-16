section .data
hello db 'Hello, Holberton', 0
newline db 10  ; ASCII code for newline
section .text
global main
extern printf
section .text
main:
push rdi; Push a register to maintain stack alignment
mov rdi, hello; Load the address of the string into rdi
call printf; Call printf function
pop rdi; Restore the stack pointer
mov eax, 0; Return 0 from main
ret
