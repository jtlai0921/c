#include <stdio.h>
#include <conio.h>

int main()
{
    int ch;
    int clk;
    
    while(1)
    {
        //ch = getchar();        
        getch();
        clk = clock();
        printf("%d\n", clk);
    }
    
	return 0;
}

