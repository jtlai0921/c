#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1  //�N�����ƶüƪ��̤p�� 
#define MAX 13  //�N�����ƶüƪ��̤j�� 
#define NUM 0 //�N��ݭn�X�Ӥ����ƶüƪ��Ӽ� 
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
        printf("%s",(s==1)?"����":(s==2)?"���":(s==3?"�R��":"�®�") ,s);
        printf("%d\n",r);   
    }
	return 0;
}

