#include <unistd.h> //sleep()
#include <stdio.h>

void red(int n)
{
    int i;
    
    for(i=n; i>0; i--){
        sleep(1);
        printf("Red %d\n", i);
    }
}

void green(int n)
{
    int i;
    
    for(i=n; i>0; i--){
        sleep(1);
        printf("Green %d\n", i);
    }
}

void yellow(int n)
{
    int i;
    
    for(i=n; i>0; i--){
        sleep(1);
        printf("Yellow %d\n", i);
    }
}

int main()
{
    int i;

    while(1){
        red(10);
        green(7);
        yellow(3);
    }

    return 0;
}
