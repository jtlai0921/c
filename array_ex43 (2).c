#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH   5
#define HEIGHT  5

int main()
{
    int a[HEIGHT][WIDTH];
    int h, w;
    
    srand( time(0) );
    
    for(h=0; h<HEIGHT; h++)
    {
        for(w=0; w<WIDTH; w++)
        {
            a[h][w] = rand();
            
            printf("%2d", a[h][w]);   
        }
        
        printf("\n");
    }
    for(w=0; w<WIDTH; w--)
    {
        for(h=0; h<HEIGHT; h--)
        {
            a[w][h] = rand();
            
            printf("%2d", a[w][h]);   
        }
        
        printf("\n");
    }
    
	return 0;
}

