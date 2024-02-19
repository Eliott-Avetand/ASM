BITS 64
SECTION .text
    GLOBAL test_strstr

test_strstr:
    XOR rcx, rcx                ; Set string1 counter to 0
    XOR r10, r10                ; Set string2 counter to 0
    XOR r11, r11                ; Set the pos of char2 located in string1 to 0
    JMP iterate
next_char:
    INC rcx                     ; Increment string1 counter
    MOV r11, rcx                ; Set the pos for of char2 located in string1 to the string1 counter
    MOV r10, 0                  ; Set string2 counter to 0
    JMP iterate                 ; Go to iterate
next_both:
    INC r10                     ; Increment the counter of string2
    INC rcx                     ; Increment the counter of string1
iterate:
    MOV r8b, [rdi + rcx]        ; Move char of string 1 in r8b
    MOV r9b, [rsi + r10]        ; Move char of string 2 in r9b
    CMP r9b, BYTE 0             ; Check if char2 is at the end
    JE end                      ; If yes, go to the end
    CMP r8b, BYTE 0             ; Else, check if string1 is at the end
    JE not_found                ; If yes, go to not_found
    CMP r8b, r9b                ; Else, check if both char are equals
    JE next_both                ; If yes, increase both char by going to next_both
    JNE next_char               ; Else, go to next_char
end:
    MOV rax, rdi                ; Set rax to string1
    ADD rax, r11                ; Move the pointer to the pos of char2 located in string1
    RET                         ; Return rax
not_found:
    MOV rax, 0                  ; Set rax to NULL
    RET                         ; Return rax