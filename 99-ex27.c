#include <stdio.h>

int main()
{
    int m, n;
    
    for( m=2; m<=9; m++ ){
        for( n=1; n<=9; n++ )
            printf("%d x %d = %d \n", m, n, m*n);
        printf("\n");
    }

	return 0;
}

