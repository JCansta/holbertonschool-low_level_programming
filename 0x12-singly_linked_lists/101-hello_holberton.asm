	global		main

	section		.text

main:	mov		rax, 1				;systema call for write
		mov		rdi, 1				;file handle 1 is stdout
		mov		rsi, msg			;address of string to output
		mov		rdx, 17				;number of bytes
		syscall						;invoke operating system to do the write
		mov		rax, 60				;systema call for exit
		xor		rdi, rdi			;exit code 0
		syscall						;invoke operating system to exit

	section		.data
msg:	db		"Hello, Holberton",10	;10 is code ASCII for new line
