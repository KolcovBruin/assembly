// /*
#include <stdio.h>


int main()
{
    //b^2-4ac
     short int a;
     short int b;
     short int c;
     short int y;
    printf("Введите A,B,C\n");
    scanf ("%hi%hi%hi",&a,&b,&c);
    int e=0;
    printf("b^2-4ac = %i\n", e=b*b-4*a*c);
   
  int A_h=0;
      int A_l=0;
      int A_x=0;
      int B_h=0;
      int B_l=0;
      int B_x=0;
      int C_h=0;
      int C_l=0;
      int C_x=0;
      int D_h=0;
      int D_l=0;
      int D_x=0;
    __asm
    {
    mov ah,A_h
    mov al,A_l
    mov ax,A_x
    mov bh,B_h
    mov bl,B_l
    mov bx,B_x
    mov ch,C_h
    mov cl,C_l
    mov cx,C_x
    mov dh,D_h
    mov dl,D_l
    mov dx,D_x
            
        
        
        mov ax,b
        imul b
        
        
        
  mov A_h,ah
  mov A_l,al
  mov A_x,ax
  mov B_h,bh
  mov B_l,bl
  mov B_x,bx
  mov C_h,ch
  mov C_l,cl
  mov C_x,cx
  mov D_h,dh
  mov D_l,dl
  mov D_x,dx
  }
  printf("\n\n\n");
       printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
    
  __asm
     {
         mov ah,A_h
         mov al,A_l
         mov ax,A_x
         mov bh,B_h
         mov bl,B_l
         mov bx,B_x
         mov ch,C_h
         mov cl,C_l
         mov cx,C_x
         mov dh,D_h
         mov dl,D_l
         mov dx,D_x
         
         
        mov b,ax
        mov ax,a
        mov cl,4
        imul cl
         
         
         
        mov A_h,ah
        mov A_l,al
        mov A_x,ax
        mov B_h,bh
        mov B_l,bl
        mov B_x,bx
        mov C_h,ch
        mov C_l,cl
        mov C_x,cx
        mov D_h,dh
        mov D_l,dl
        mov D_x,dx
     }
    printf("\n\n\n");
          printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
    
    __asm
    {
        
        mov ah,A_h
        mov al,A_l
        mov ax,A_x
        mov bh,B_h
        mov bl,B_l
        mov bx,B_x
        mov ch,C_h
        mov cl,C_l
        mov cx,C_x
        mov dh,D_h
        mov dl,D_l
        mov dx,D_x
        
        
        
        imul c
        mov bx,b
        
        
        mov A_h,ah
               mov A_l,al
               mov A_x,ax
               mov B_h,bh
               mov B_l,bl
               mov B_x,bx
               mov C_h,ch
               mov C_l,cl
               mov C_x,cx
               mov D_h,dh
               mov D_l,dl
               mov D_x,dx
    }
    printf("\n\n\n");
             printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
    __asm
       {
        mov ah,A_h
        mov al,A_l
        mov ax,A_x
        mov bh,B_h
        mov bl,B_l
        mov bx,B_x
        mov ch,C_h
        mov cl,C_l
        mov cx,C_x
        mov dh,D_h
        mov dl,D_l
        mov dx,D_x
           
           
        sub bx,ax
       // sbb dx,bx
        mov y,bx
           
           mov A_h,ah
           mov A_l,al
           mov A_x,ax
           mov B_h,bh
           mov B_l,bl
           mov B_x,bx
           mov C_h,ch
           mov C_l,cl
           mov C_x,cx
           mov D_h,dh
           mov D_l,dl
           mov D_x,dx
           
    }
    printf("\n\n\n");
    printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
    printf("b^2-4ac = %hu\n",y);
    printf("Проверка:b^2-4ac = %i\n", e);
    return 0;
}
// */
/*
 #include <stdio.h>


 int main()
 {
    unsigned short int a;
     unsigned short int b;
     unsigned short int c;
     unsigned short int y;
     scanf ("%hu%hu%hu",&a,&b,&c);
     
    printf("b^2-4ac=%i\n", y=b*b-4*a*c);
  int A_h=0;
      int A_l=0;
      int A_x=0;
      int B_h=0;
      int B_l=0;
      int B_x=0;
      int C_h=0;
      int C_l=0;
      int C_x=0;
      int D_h=0;
      int D_l=0;
      int D_x=0;
     __asm
     {
         mov ah,A_h
         mov al,A_l
         mov ax,A_x
         mov bh,B_h
         mov bl,B_l
         mov bx,B_x
         mov ch,C_h
         mov cl,C_l
         mov cx,C_x
         mov dh,D_h
         mov dl,D_l
         mov dx,D_x
 
 
 
         mov ax,b
         mul b
 
 
 mov A_h,ah
           mov A_l,al
           mov A_x,ax
           mov B_h,bh
           mov B_l,bl
           mov B_x,bx
           mov C_h,ch
           mov C_l,cl
           mov C_x,cx
           mov D_h,dh
           mov D_l,dl
           mov D_x,dx
 }
 printf("\n\n\n");
    printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
 
 __asm
 {
      mov ah,A_h
      mov al,A_l
      mov ax,A_x
      mov bh,B_h
      mov bl,B_l
      mov bx,B_x
      mov ch,C_h
      mov cl,C_l
      mov cx,C_x
      mov dh,D_h
      mov dl,D_l
      mov dx,D_x
 
 
         mov b,ax
         mov ax,a
         mov cl,4
         mul cl
 
 
 mov A_h,ah
           mov A_l,al
           mov A_x,ax
           mov B_h,bh
           mov B_l,bl
           mov B_x,bx
           mov C_h,ch
           mov C_l,cl
           mov C_x,cx
           mov D_h,dh
           mov D_l,dl
           mov D_x,dx
 }
 printf("\n\n\n");
    printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
 
 __asm
 {
         mov ah,A_h
         mov al,A_l
         mov ax,A_x
         mov bh,B_h
         mov bl,B_l
         mov bx,B_x
         mov ch,C_h
         mov cl,C_l
         mov cx,C_x
         mov dh,D_h
         mov dl,D_l
         mov dx,D_x
 
 
 
         mul c
         mov bx,b
 
 
 mov A_h,ah
           mov A_l,al
           mov A_x,ax
           mov B_h,bh
           mov B_l,bl
           mov B_x,bx
           mov C_h,ch
           mov C_l,cl
           mov C_x,cx
           mov D_h,dh
           mov D_l,dl
           mov D_x,dx
 }
 printf("\n\n\n");
    printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
 __asm
 {
        mov ah,A_h
        mov al,A_l
        mov ax,A_x
        mov bh,B_h
        mov bl,B_l
        mov bx,B_x
        mov ch,C_h
        mov cl,C_l
        mov cx,C_x
        mov dh,D_h
        mov dl,D_l
        mov dx,D_x
 
         sub bx,ax
        // sbb dx,bx  ???
         mov y,bx
 
 
 mov A_h,ah
           mov A_l,al
           mov A_x,ax
           mov B_h,bh
           mov B_l,bl
           mov B_x,bx
           mov C_h,ch
           mov C_l,cl
           mov C_x,cx
           mov D_h,dh
           mov D_l,dl
           mov D_x,dx
     }
 printf("\n\n\n");
    printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
     printf("%hu\n",y);
     return 0;
 }
*/


 

 /*
 #include <stdio.h>


 int main()
 {
    unsigned short int a;
     unsigned short int b;
     unsigned short int c;
     unsigned short int y;
     scanf ("%hu%hu%hu",&a,&b,&c);
     int A_h=0;
     int A_l=0;
     int A_x=0;
     int B_h=0;
     int B_l=0;
     int B_x=0;
     int C_h=0;
     int C_l=0;
     int C_x=0;
     int D_h=0;
     int D_l=0;
     int D_x=0;
     int e=0;
   // printf("%i\n", e=b*b-4*a*c);
     __asm
     {
         mov ah,A_h
                 mov al,A_l
                 mov ax,A_x
                 mov bh,B_h
                 mov bl,B_l
                 mov bx,B_x
                 mov ch,C_h
                 mov cl,C_l
                 mov cx,C_x
                 mov dh,D_h
                 mov dl,D_l
                 mov dx,D_x
         
         
         
         
         
         mov al,c
         mul c
         
         
         
         
         mov A_h,ah
         mov A_l,al
         mov A_x,ax
         mov B_h,bh
         mov B_l,bl
         mov B_x,bx
         mov C_h,ch
         mov C_l,cl
         mov C_x,cx
         mov D_h,dh
         mov D_l,dl
         mov D_x,dx
     }
      //printf("%i \n",Al);
     printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
     __asm
     {
          mov ah,A_h
                         mov al,A_l
                         mov ax,A_x
                         mov bh,B_h
                         mov bl,B_l
                         mov bx,B_x
                         mov ch,C_h
                         mov cl,C_l
                         mov cx,C_x
                         mov dh,D_h
                         mov dl,D_l
                         mov dx,D_x
                 
         
         
         
         mov cx,ax
         mov bx,0
         mov al,a
         mul a
         
         
         
         
        mov A_h,ah
                mov A_l,al
                mov A_x,ax
                mov B_h,bh
                mov B_l,bl
                mov B_x,bx
                mov C_h,ch
                mov C_l,cl
                mov C_x,cx
                mov D_h,dh
                mov D_l,dl
                mov D_x,dx
         
     }
     //a^3-c^2 // B
    printf("\n\n\n");
      printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
   //  printf("%i %i\n", e, c);
     __asm
     {
          mov ah,A_h
                         mov al,A_l
                         mov ax,A_x
                         mov bh,B_h
                         mov bl,B_l
                         mov bx,B_x
                         mov ch,C_h
                         mov cl,C_l
                         mov cx,C_x
                         mov dh,D_h
                         mov dl,D_l
                         mov dx,D_x
                 
         
         
         mov dl,a
         mov dh,0
         mul dx
         
         
         
         
         //mov dx,10
        mov A_h,ah
        mov A_l,al
        mov A_x,ax
        mov B_h,bh
        mov B_l,bl
        mov B_x,bx
        mov C_h,ch
        mov C_l,cl
        mov C_x,cx
        mov D_h,dh
        mov D_l,dl
        mov D_x,dx
     }
     printf("\n\n\n");
     printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
   //  printf("%i %i\n", e, c);
     __asm
     {
          mov ah,A_h
                         mov al,A_l
                         mov ax,A_x
                         mov bh,B_h
                         mov bl,B_l
                         mov bx,B_x
                         mov ch,C_h
                         mov cl,C_l
                         mov cx,C_x
                         mov dh,D_h
                         mov dl,D_l
                         mov dx,D_x
                 
         
         
         
         sub ax,cx
         mov A_h,ah
         
         
         
         mov A_l,al
         mov A_x,ax
         mov B_h,bh
         mov B_l,bl
         mov B_x,bx
         mov C_h,ch
         mov C_l,cl
         mov C_x,cx
         mov D_h,dh
         mov D_l,dl
         mov D_x,dx
     }
     printf("\n\n\n");
     printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
     __asm
         {
             mov ah,A_h
                             mov al,A_l
                             mov ax,A_x
                             mov bh,B_h
                             mov bl,B_l
                             mov bx,B_x
                             mov ch,C_h
                             mov cl,C_l
                             mov cx,C_x
                             mov dh,D_h
                             mov dl,D_l
                             mov dx,D_x
                     
             
             
         sbb dx,bx
         div b
         mov b,dx
         mov y,ax
             
             mov A_l,al
                     mov A_x,ax
                     mov B_h,bh
                     mov B_l,bl
                     mov B_x,bx
                     mov C_h,ch
                     mov C_l,cl
                     mov C_x,cx
                     mov D_h,dh
                     mov D_l,dl
                     mov D_x,dx
             
     }
       printf("\n\n\n");
      printf("ah=%i al=%i ax=%i\nbh=%i bl=%i bx=%i\nch=%i cl=%i cx=%i\ndh=%i dl=%i dx=%i\n", A_h, A_l, A_x, B_h, B_l, B_x, C_h, C_l, C_x, D_h, D_l,D_x );
     //printf("%hu\n",y);
     return 0;
 }
 */
