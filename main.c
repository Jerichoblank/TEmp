#include <stdio.h>
void main()
{
    int tmp;

    printf("ibutang kung bugnaw o init ang panahon : ");
    scanf("%d" ,&tmp);
    if(tmp<0)
              printf("sobra ka bugnaw na panahon.\n");
    else if(tmp<10)
            printf("grabe ka bugnaw ang panahon.\n");
          else if(tmp<20)
               printf("tugnaw ang panahon.\n");
             else if(tmp<30)
                   printf("normal na temperatura.\n");
                  else if(tmp<40)
                     printf("init ang panahon.\n");
                        else
                            printf("grabe ka init.\n");



}
