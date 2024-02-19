BITS 64
SECTION .text
    GLOBAL test_memfrob

test_memfrob:
    XOR rcx, rcx                ; Set counter to 0
    JMP iterate                 ; Go to iterate function
set_memory:
    XOR [rdi + rcx], BYTE 42    ; Move the char into the string + counter position
    INC rcx                     ; Increment counter
iterate:
    CMP rcx, rsi                ; Check if counter equals the size n
    JNE set_memory              ; If not, go to set_memory
    MOV rax, rdi                ; Else, set rax to the string
    RET                         ; Return rax
