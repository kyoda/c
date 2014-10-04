.globl main
.data
msg: .asciz "Hello, world\n"

main:

movl $4, %eax
movl $1, %ebx
movl $msg, %ecx
movl $10, %edx
int $0x80


movl $1, %eax
movl $0, %ebx
int $0x80

