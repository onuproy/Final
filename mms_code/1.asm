.model small
.stack 100h
.code

start:
mov dl,'?'
mov ah, 2h
int 21h

mov ah, 1h
int 21h

mov bl, al
mov dl, ' '
mov ah,2h
int 21h

mov dl, bl
mov ah,2h
int 21h
mov ax,4c00h
int 21h
end start


