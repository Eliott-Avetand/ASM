BITS 64
SECTION .text
    GLOBAL test_strrchr

test_strrchr:
    XOR rcx, rcx                ; Set counter to 0
    JMP size_str                ; Go to size_str function
increment:
    INC rcx                     ; Increase rcx
size_str:
    CMP [rdi + rcx], BYTE 0     ; Check if end of string
    JNE increment               ; If not, go to increment
    JE compare
decrement:
    DEC rcx                     ; Else, decrement counter
compare:
    CMP rcx, -1                 ; Check if string is at the end
    JE not_found                ; If yes, go to not_found function
    CMP [rdi + rcx], sil        ; Else, check if string is equal to the char
    JNE decrement               ; If not, go to decrement
end:
    MOV rax, rdi                ; Else, set rax to the string
    ADD rax, rcx                ; Move the pointer to 'counter' position
    RET                         ; Return the pointer
not_found:
    CMP sil, 0                  ; Check if the char given is the terminated-byte
    JE end                      ; If yes, go to the end
    MOV rax, 0                  ; Set rax to NULL
    RET                         ; Return NULL