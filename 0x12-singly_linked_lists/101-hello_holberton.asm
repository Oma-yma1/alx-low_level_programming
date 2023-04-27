global main
 extern printf
main:
 mov edi, format
 mov esi, message
 xor eax, eax
 call printf
 mov   eax, 0
 ret
message: db "Hello, Holberton", 0
format: db "%s", 10, 0
