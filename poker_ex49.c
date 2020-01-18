#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1  //代表不重複亂數的最小值 
#define MAX 13  //代表不重複亂數的最大值 
#define NUM 0 //代表需要幾個不重複亂數的個數 
int s, r;

void deal()
{
    s = rand()%4+1;
    r = rand()%13+1;
}

int main()
{
    int i;  
    srand(time(0));
    for(i=0; i<52; i++)
    {
     	//getch(); 
		deal();
        printf("%s",(s==1)?"梅花":(s==2)?"方塊":(s==3?"愛心":"黑桃") ,s);
        printf("%d\n",r);   
    }
	return 0;
}

