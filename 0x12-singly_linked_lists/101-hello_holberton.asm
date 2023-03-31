section .data
    message db "Hello, Holberton", 0x0A ; 0x0A is the new line character

section .text
    global main

    extern printf

main:
    push message
    call printf
    add rsp, 8 ; 64-bit calling convention requires us to clean up the stack after the call to printf

    xor eax, eax ; return 0
    ret
