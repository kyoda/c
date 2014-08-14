# study c

## man

| chapter | content | e.g. |
|:---:|:---:|:---:|
| 1 | command | ls |
| 2 | system call | open |
| 3 | lib function | printf |
| 4 | special file | printf |
| 5 | file format | passwd |
| 6 | game | fortune |
| 7 | other | ascii |
| 8 | manage | ifconfig |

+ man 1 read (man read)
+ man 2 read

### locate <***.h> ?

> SYNOPSIS

### intro

show the introduction of the chapter
> man 1 intro



## assenmble

### register

| 32 | 16 | 8 |
|:--:|:--:|:--:|
| EAX | AX | AH, AL |
| EBX | BX | BH, BL |
| ECX | CX | CH, CL |
| EDX | DX | DH, DL |
| ESI | SI ||
| EDI | DI ||
| EBP | BP ||
| EIP | IP ||
| ESP | SP ||

### mnemonic

> movb $0x01 %al

opecode: movb
operand: $0x01, %al


### opecode

| bit | mean | e.g. | | register |
|:--:|:--:|:--:|:--:|:--:|
| 8 | byte | movb | | |
| 16 | words | movw | eXtend | %ax |
| 32 | long | movl | Extend | %eax |
| 32 | doublewords | movd | | |
| 64 | quadword | movq | | |


number > $  
register > % 


