section .data
	; message to print, with newline and null terminator
	message db "Hello, Holberton", 10, 0
	; format string for printf
	format db "%s", 0

section .text
	global main
	extern printf

; main function
main:
	; prepare arguments for printf
	mov rdi, format		; format string
	mov rsi, message	; message to print
	xor rax, rax		; clear RAX to indicate printf should return void
	; call printf
	call printf

	; exit program
	xor eax, eax		; clear EAX to indicate successful exit status
	ret
