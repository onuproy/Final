; Overflow

mov ax, 9098h
mov bx, 0098h
add ax,bx

jo overflow

mov cx, ax
jmp end

overflow:mov dx, ax
end: