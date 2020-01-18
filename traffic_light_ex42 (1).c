#include <unistd.h> //sleep()
#include <stdio.h>

void light(int l, int n)
{
    int i;
    
    for(i=n; i>0; i--){
        sleep(1);
        printf("%s %d\n", (l==0)?"RED":(l==1?"Green":"Yellow"), i);
    }
}

int main()
{
    int i;

    while(1){
        light(0, 10);
        light(1, 7);
        light(2, 3);
    }

    return 0;
}
