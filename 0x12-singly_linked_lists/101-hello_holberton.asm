extern printf

section .data
msg: 	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

section .text

global adebisi1

adebisi1:
    	push	rbp
    	mov	rdi,fmt
	mov 	rsi,msg
	mov	rax,0
	call	printf
	pop	rbp
	mov	rax,0
	ret
