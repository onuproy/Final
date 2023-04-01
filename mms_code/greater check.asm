; Write a assamble program to check whether the
;lower nibble of Al is greater then 5 or not

mov al, 5Ah
mov cl, 05h

and al, 0fh
cmp al, cl

JG Greater
jmp end

Greater:mov bl, 1h
end: