#include <stdio.h>

#define SIZE 3

void show_1d();
int a[SIZE]={5,-2,17};

int main()
{
    int i=0;

    show_1d();
    a[1]=100;
    show_1d();

    return 0;
}

void show_1d()
{
    int i=0;

    for ( ; i<size; i++)
        printf("a[%d]=%-5d <--%p\n",i,a[i],&a[i]);
}

