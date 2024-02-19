BITS 64
SECTION .text
    GLOBAL test_memcpy

test_memcpy:
    XOR rcx, rcx                    ; Set counter to 0
    JMP iterate                     ; Go to iterate function
set_memory:
    MOV r8b, [rsi + rcx]            ; Put the char of the string to r8b register
    MOV [rdi + rcx], r8b            ; Move the char into the string + counter position
    INC rcx                         ; Increment counter
iterate:
    CMP rcx, rdx                    ; Check if counter equals the size n
    JNE set_memory                  ; If not, go to set_memory
    MOV rax, rdi                    ; Else, set rax to the string
    RET                             ; Return rax
