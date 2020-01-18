#include <unistd.h> //sleep()
#include <stdio.h>

void l(int l, int n)
{
    int i;
    
    for(i=n; i>0; i--){
        Sleep(100);
        printf("%s %d\n",(l==0)?"RED":(l==1?"Green":"Yellow"),i);
    }
}

int main()
{
    int i;
    while(1)
	{
        l(0, 5);
        l(1, 3);
        l(2, 2);
    }
    return 0;
}
