#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int Y=0;
    srand(time(NULL));
    int N;
    printf("Введите размер массива\n");
    scanf("%i",&N);
    short int mas[N];
   for(int i=0;i<N;i++)
        {
            mas[i]=30+rand()%70;
            printf("%i  ",mas[i]);
        }
    
    __asm
    {
         mov dh,N
        // inc dh
         xor dl,dl
         lea rbx, mas
    next:
        cmp dh,0
        jz end
        mov ax, [rbx]
        cmp ax,0
        dec dh
        jl end
        inc dl
        inc rbx
        inc rbx
        jmp next
        
    end:
        mov Y,dl
    }
     printf("\n%i\n",Y);
    return 0;
}


