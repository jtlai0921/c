#include <stdio.h>

int main()
{
    int i;
    int sum;
    
    sum = 0;
    i = 1;
    while(i<=100)
    {
        sum = sum + i;
        i++;
    }
        
    printf("sum = %d \n", sum);    
    
	return 0;
}

