BITS 64
SECTION .text
    GLOBAL strcmp

strcmp:
    XOR rcx, rcx                ; Set counter to 0
    JMP compare                 ; Go to compare function
end:
    MOV rax, 0                  ; Set rax to NULL
    RET                         ; Return rax
increment:
    CMP r8b, BYTE 0             ; Check if string is at the end
    JE end                      ; If yes, end program
    INC rcx                     ; Else, increment counter
compare:
    MOV r8b, [rdi + rcx]        ; Move a char of first string in r8b register
    MOV r9b, [rsi + rcx]        ; Move a char of second string in r8b register
    CMP r8b, r9b                ; Compare both registers
    JE increment                ; If equal, go to increment
    SUB r8b, r9b                ; Else, substract char1 by char2 and put it in r8b
    MOVSX rax, r8b              ; Set rax to the substraction value
    RET                         ; Return rax