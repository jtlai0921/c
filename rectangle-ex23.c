#include <stdio.h>

int main()
{
    int width, height;
    int w, h;
    int x, y;
    
    printf("Please input X and Y: ");
    scanf("%d %d", &x, &y);
    
    printf("Please input width and height: ");
    scanf("%d %d", &width, &height);    
    
    h=0;
    while(h<y)
    {
        putchar('\n');
        h++;
    }
    
    h=0;
    while(h<height)
    {
        w=0;
        while(w<x)
        {
            putchar(' ');
            w++;
        }
        
        w=0;
        while(w<width)
        {
            putchar('*');
            w++;
            //Sleep(100);            
        }
        putchar('\n');
        
        h++;
    }

	return 0;
}

