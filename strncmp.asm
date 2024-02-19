BITS 64
SECTION .text
    GLOBAL strncmp

strncmp:
    XOR rcx, rcx                ; Set the counter to 0
    JMP compare                 ; Go to compare function
end:
    MOV rax, 0                  ; Set rax to NULL
    RET                         ; Return rax
increment:
    CMP r8b, BYTE 0             ; Check if end of string
    JE end                      ; If yes, go to the end
    INC rcx                     ; Else, increment the counter
compare:
    CMP rcx, rdx                ; Check if counter equal to the size n passed
    JE end                      ; If yes, go to the end
    MOV r8b, [rdi + rcx]        ; Else, move a char of the first string to r8b register
    MOV r9b, [rsi + rcx]        ; Then move a char of the same index of the second string to r9b register
    CMP r8b, r9b                ; Check if both are equals
    JE increment                ; If yes, go to increment function
    SUB r8b, r9b                ; Else, move the substraction of r8b by r9b to the r8b register
    MOVSX rax, r8b              ; Set rax to the substraction
    RET                         ; Return rax