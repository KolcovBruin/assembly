
#include <stdio.h>


int main()
{
   
     short int a;
     short int b;
     short int c;
     short int y;
    printf("Введите A,B,C\n");
    scanf ("%hi%hi%hi",&a,&b,&c);
    int e=0;
    printf("b^2-4ac = %i\n", e=b*b-4*a*c);
   
  
    __asm
    {
        mov ax,b
        imul b
        mov b,ax
        mov ax,a
        mov cl,4
        imul cl
        imul c
        mov bx,b
        sub bx,ax
        mov y,bx
           }

    printf("b^2-4ac = %hu\n",y);
    printf("Проверка:b^2-4ac = %i\n", e);
    return 0;
}
