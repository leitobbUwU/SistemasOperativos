section .text
        global _start

_start:
       mov rax, 10
       mov rbx, 5
       add rbx, rax

       mov rax, 4
       int 0x80

       mov rax, 1
       int 0x80
