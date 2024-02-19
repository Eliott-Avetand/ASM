BITS 64
SECTION .text
    GLOBAL strpbrk

strpbrk:
    XOR rcx, rcx                ; Set string1 counter to 0
    XOR r10, r10                ; Set string2 counter to 0
    JMP iterate                 ; Go to iterate
next_char1:
    INC rcx                     ; Increment string1 counter
    XOR r10, r10                ; Set string2 counter to 0
    JMP iterate                 ; Go to iterate
next_char2:
    INC r10                     ; Increment string2 counter
iterate:
    MOV r8b, [rdi + rcx]        ; Move char of string1 in r8b
    MOV r9b, [rsi + r10]        ; Move char of string2 in r9b
    CMP r8b, BYTE 0             ; Check if string1 is at the end
    JE not_found                ; If yes, go to not_found
    CMP r9b, BYTE 0             ; Else, check if string2 is at the end
    JE next_char1               ; If yes, go to next_char1
    CMP r8b, r9b                ; If not, compare both char
    JE end                      ; If equals, end program
    INC r10                     ; Else, increment string2 counter
    JMP iterate                 ; Then, reloop
end:
    MOV rax, rdi                ; Set rax to string given
    ADD rax, rcx                ; Move the pointer by 'string1 counter' position
    RET                         ; Return rax
not_found:
    MOV rax, 0                  ; Set rax to NULL
    RET                         ; Return rax