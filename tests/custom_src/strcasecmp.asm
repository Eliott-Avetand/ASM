BITS 64
SECTION .text
    GLOBAL test_strcasecmp

test_strcasecmp:
    XOR rcx, rcx                ; Set counter to 0
set_values:
    MOV r8b, [rdi + rcx]        ; Move the string1 + counter char to r8b register
    MOV r9b, [rsi + rcx]        ; Move the string2 + counter char to r9b register
iterate:
    CMP r8b, BYTE 0             ; Check if string1 is at the end
    JE end                      ; If yes, end program
    CMP r9b, BYTE 0             ; Else, check if string2 is at the end
    JE end                      ; If yes, end program
    CMP r8b, 90                 ; Else check if char1 is below 'Z'
    JLE check_caps_r8b          ; If yes, go check_caps_r8b
    CMP r9b, 90                 ; Else, check if char2 is below 'Z'
    JLE check_caps_r9b          ; If yes, go check_caps_r9b
compare_char:
    CMP r8b, r9b                ; Else, compare both char
    JNE end                     ; If they're equal, end program
    INC rcx                     ; Else, increment counter
    JMP set_values              ; Go back to set_values
check_caps_r8b:
    CMP r8b, 65                 ; Check if char1 is above 'A'
    JGE lower_case_r8b          ; If yes, go lower_case_r8b
    JL compare_char             ; Else, compar_char
lower_case_r8b:
    ADD r8b, 32                 ; Lower the char1
    JMP iterate                 ; Go back to iterate
check_caps_r9b:
    CMP r9b, 65                 ; Check if char2 is above 'A'
    JGE lower_case_r9b          ; If yes, go lower_case_r9b
    JL compare_char             ; Else, compar_char
lower_case_r9b:
    ADD r9b, 32                 ; Lower the char2
    JMP iterate                 ; Go back to iterate
end:
    SUB r8b, r9b                ; Substract r8b by r9b and push it to r8b
    MOVSX rax, r8b              ; Set rax to the substraction
    RET                         ; Return rax