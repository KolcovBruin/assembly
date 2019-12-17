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
            mas[i]=-30+rand()%70;
            printf("%i  ",mas[i]);
        }
    
    __asm
    {
        mov dh,N
        xor dl,dl
        lea rbx, mas
        mov ax, [rbx]
        cmp ax,0
        jl end
    next:
        
        inc dl
        dec dh
        cmp dh,0
        jz end
        inc rbx
        inc rbx
        mov ax, [rbx]
        cmp ax,0
        jl end
        jmp next
    end:
        mov Y,dl
    }
     printf("\n%i\n",Y);
    return 0;
}


