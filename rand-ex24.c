#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r;
    int guess;
    
    srand( time(0) );
    r = rand();
    printf("rand() = %d \n", r);
    
    while(1)
    {
        printf("\nPlease guess a number: ");
        scanf("%d", &guess);
        
        if( guess == r )
        {
            printf("You got it.\n");
            break;
        }
        else if( guess > r )
        {
            printf("too large\n");
        }
        else
        {
            printf("too small\n"); 
        }
    }

	return 0;
}

