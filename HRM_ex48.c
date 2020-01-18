#include <stdio.h>
#include <conio.h>
#include<time.h>

int main()
{
   float c;
   int i;
		for(i=0; i<10; i++)
		{	
        	c=clock();
			getch();
        	printf("%.2f s\n",c/1000);
    	}
	
	return 0;
}

