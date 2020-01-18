#include <stdio.h>

void func99(int m)
{
    int n;
    
    for( n=1; n<=9; n++ )
        printf("%d x %d = %d \n", m, n, m*n);
}

int main()
{
    int m;
    int ret;
    
    for( m=2; m<=9; m++ ){
        func99(m);
        printf("\n");
    }

	return 0;
}

