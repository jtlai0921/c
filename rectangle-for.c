#include <stdio.h>

int main()
{
    int width, height;
    
    for(height=0; height<10; height++)
    {        
        for(width=0; width<30;  width++)
        {
            putchar('*');
            //printf("%d, %d\n", height, width);
            Sleep(100);
        }
        
        putchar('\n');        
    }

	return 0;
}

