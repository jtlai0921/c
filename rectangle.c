#include <stdio.h>

int main()
{
    int width, height;
    
    height=0;
    while(height<10)
    {
        width=0;
        while(width<30)
        {
            //putchar('*');
            printf("%d, %d\n", height, width);
            Sleep(100);
            width++;
        }
        putchar('\n');
        
        height++;
    }

	return 0;
}

