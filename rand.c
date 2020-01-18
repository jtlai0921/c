#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int r;
    
    srand( time(0) );
    
    for(i=0; i<10; i++)
    {
        printf("%d\n", rand());
    }

	return 0;
}

