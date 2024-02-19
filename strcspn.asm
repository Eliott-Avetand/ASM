BITS 64
SECTION .text
    GLOBAL strcspn

strcspn:
    XOR rcx, rcx                ; Set string1 counter to 0
    XOR r10, r10                ; Set string2 counter to 0
    XOR r11, r11                ; Set the counter of the number of char not in reject to 0
    JMP iterate                 ; Go to iterate
next_char:
    XOR r10, r10                ; Set string1 counter to 0
    INC rcx                     ; Increment string2 counter
    INC r11                     ; Increment the number of char not in reject
iterate:
    MOV r8b, [rdi + rcx]        ; Move a char of string1 in r8b
    MOV r9b, [rsi + r10]        ; Move a char of string2 in r9b
    CMP r8b, BYTE 0             ; Check if end of string2
    JE end                      ; If yes, end program
    CMP r9b, BYTE 0             ; Else, check if end of string1
    JE next_char                ; If yes, go to next_char
    CMP r8b, r9b                ; Else, check if both char are equals
    JE end                      ; If yes, end program
    INC r10                     ; Else, increment string1 counter
    JMP iterate                 ; Then, reloop
end:
    MOV rax, r11                ; Set rax to the number of char not in reject
    RET                         ; Return rax