
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov ah,1
int 21h
sub al,30h
mov bl,al
shl bl,4

mov ah,1 
int 21h
sub al,30h
mov bh,al 
add bh,46h ; bh= bh(y)+46h

 shr bh,2 


ret




