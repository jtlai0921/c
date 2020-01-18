#include <stdio.h>

int main()
{
    int i;
    int n;
    
    for(n=2; n<=1000; n++)
    {        
        for(i=2; i<n; i++)
        {
            if( n%i == 0 )
                break;
        }
    
        if(i==n)
            printf("%d ", n);
    }
    
	return 0;
}

