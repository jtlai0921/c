#include <stdio.h>

int main(void)
{
    int i, k;

    /*i = 0;
    while(i<10)
    {
        k = 0;

        while(1)
        {
            printf("\t k=%d\n", k++);
            if(k>5)
                break;
        }

        printf("i=%d\n", i++);
    }*/


   for(i=0; i<10; )
    {
        for(k=0; ; )
        {
            printf("\t k=%d\n", k++);
            if(k>5)
                break;
        }

        printf("i=%d\n", i++);
    }


    return 0;
}
