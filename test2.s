.data
msg: .string "eax = ebx\n"
msgend: .equ len, msgend - msg
 
.text
.global main
main:
    movl $100, %eax
    movl $103, %ebx
    cmpl %eax, %ebx
    je print
end:
    movl $1, %eax      
    xorl %ebx, %ebx    
    int $0x80         
print:
    movl $4, %eax     
    movl $1, %ebx     
    movl $msg, %ecx   
    movl $len, %edx   
    int $0x80         
    jmp end
