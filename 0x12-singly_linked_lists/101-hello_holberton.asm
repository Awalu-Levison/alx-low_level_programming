	extern	printf

	        section .data			; Variable declarations
msg:		db "Hello, Holberton", 0
fmt:	    	db "%s", 10, 0			; Formating the stdout
author:		db "Awalu Levison"		; Origin of work

	        section .text			; Content of write function

		global main			; Program entry point
main:
		push	rbp			; set up stack frame memory

		mov	rdi,fmt
		mov	rsi,msg			; Define msg var
		mov	rax,0
	        call    printf			; Calling the function

		pop	rbp			; Restore the stack memory

		mov	rax,0			; Indicates succeful execution
		ret				; return
