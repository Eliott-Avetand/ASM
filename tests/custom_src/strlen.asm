BITS 64
SECTION .text
    GLOBAL test_strlen

test_strlen:
    XOR rcx, rcx                ; Set counter to 0
    JMP iterate                 ; Go to iterate function
increment:
    INC rcx                     ; Increment counter
iterate:
    CMP [rdi + rcx], BYTE 0     ; Check if end of string
    JNE increment               ; If not, go to increment
    MOV rax, rcx                ; Else, set rax to the counter
    RET                         ; return rax
