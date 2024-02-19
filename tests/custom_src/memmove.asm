BITS 64
SECTION .text
    GLOBAL test_memmove

test_memmove:
    XOR rcx, rcx                    ; Set counter to 0
    CMP rdx, 0
    JE end
    JMP compare                     ; Go to compare function
push_stack:
    MOV rbx, [rsi + rcx]            ; Put the char of the string to bx register
    PUSH rbx                        ; Push the char to the stack
    INC rcx                         ; Increment counter
compare:
    CMP rcx, rdx                    ; Check if counter equals the size n
    JNE push_stack                  ; If not, go to push_stack
    JMP pull_stack                  ; Else, go to pull_stack
pull_stack:
    DEC rcx                         ; Decrement counter
    POP rbx                         ; Pull the last pushed char, to the rbx register
    MOV BYTE [rdi + rcx], bl        ; Put bl in string[counter] position
    CMP rcx, 0                      ; Check if counter equal 0
    JNE pull_stack                  ; If not, re-loop again
end:
    MOV rax, rdi                    ; Else, set rax to the string
    RET                             ; Return rax
