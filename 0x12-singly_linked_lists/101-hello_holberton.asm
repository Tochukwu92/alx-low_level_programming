
section .data
    hello db "Hello, Holberton,",10,0 ; The format string, 10 is the newline character

section .text
global main
extern printf

main:
    ; Call printf
    mov rdi, hello   ; The address of the format string
    call printf

    ; Exit the program
    mov rax, 60      ; syscall number for sys_exit
    xor rdi, rdi     ; exit status code (0)
    syscall

