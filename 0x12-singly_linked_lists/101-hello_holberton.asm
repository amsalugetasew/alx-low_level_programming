global	main
	extern	printf
main:
	mov	edi, message
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
message: db 'Hello, Holberton', 0xA, 0x0
