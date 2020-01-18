#include <stdio.h>

int main()
{
    int width, height;
    int w, h;
    
    width = 26;
    height = 10;    
    
    h=0;
    while(h<height)
    {
        w=0;
        while(w<width)
        {
            if( h==0 || h==height-1 || w==0 || w==width-1 )
                putchar('*');
            else
                putchar(' ');
                
            w++;
        }
        putchar('\n');
        
        h++;
    }

	return 0;
}

