#include <stdio.h>

int main()
{
    int i;
    int sum;
    
    sum = 0;
    i = 1;
    while(i<=100)
    {
        if( i % 5 == 0 )
            sum += i; 
                       
        i++;
    }
    
    /*sum = 0;
    i = 5;
    while(i<=100)
    {
        sum += i;            
        i += 5;
    }*/
        
    printf("sum = %d \n", sum);    
    
	return 0;
}

