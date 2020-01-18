#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH   10
#define HEIGHT  10

int main()
{
    int a[HEIGHT][WIDTH],h,w,i,min,max,sum;
    srand( time(0) );
    for(h=0; h<HEIGHT; h++)
    {
        a[h][w] = rand()%HEIGHT;
        printf(" %d\n", a[h][w]);   
    }
    printf("\n\n");
    min,max = a[h][w];
    sum = 0;
    for(w=0; w<WIDTH; w++)
    {
        if( a[h][w]< WIDTH )
        min = a[h][w]; 
    }
    
    {
        if( a[h][w] > max )
        max = a[h][w]; 
        sum += a[h][w];
    }
    printf(" min = %d \n", min);
    printf(" max = %d \n", max);
    printf(" avg = %d \n", sum);
	return 0;
}

