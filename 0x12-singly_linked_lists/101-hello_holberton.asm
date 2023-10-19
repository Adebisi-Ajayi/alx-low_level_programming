section .data
    hello db "Hello, Holberton",10,0  ; The string to print, followed by a newline and null terminator

section .text
global adebisi1
extern printf

adebisi1:
    push rbp
    mov rdi, hello  ; Load the address of the string into rdi
    call printf    ; Call printf to print the string
    pop rbp
    ret

