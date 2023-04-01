mov ah,1h
int 21h 

sub al,30h
mov dh, al

mov dl,'a'
mov ah,2h

int 21h