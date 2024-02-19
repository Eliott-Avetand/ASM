BITS 64
SECTION .text
    GLOBAL strchr

strchr:
    XOR rcx, rcx                ; Set counter to 0
    JMP compare                 ; Go to compare function
not_found:
    CMP sil, 0                  ; Check if the int given is the terminated-byte
    JE end                      ; If yes, go to the end
    MOV rax, 0                  ; Esle, set rax to NULL
    RET                         ; Return NULL
increment:
    INC rcx                     ; Increment counter
compare:
    CMP [rdi + rcx], BYTE 0     ; Check if string is at the end
    JE not_found                ; If yes, go to not_found function
    CMP [rdi + rcx], sil        ; Else, check if string is equal to the char
    JNE increment               ; If not, go to increment
end:
    MOV rax, rdi                ; Else, set rax to the string given
    ADD rax, rcx                ; Move the pointer by 'counter' position
    RET                         ; Return rax