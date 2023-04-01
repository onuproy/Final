;Check Auxilary carry

org 100h

mov al, 97h
mov bl, 07h

shl al, 4
shl bl, 4

add al,bl

JC AUX
mov dl, 00h
jmp end

AUX:mov dl, 01h
    end:
ret