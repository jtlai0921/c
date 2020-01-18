#include <stdio.h>

float average(float *point, int n);
float search(float point[][4], int n);

int main()
{
    float score[4][4] = {{76,90,92,87},
                        {68,78,69,94},
                        {89,82,81,60},
                        {81,68,60,97}};
                        
    printf("avg = %f \n", average((float*)score, 4*4));
    
    printf("avg-N = %f \n", search(score, 3));

    return 0;
}

float average(float *point, int n)
{
    int i;
    float sum;

    sum = 0;
    for(i=0; i<n; i++)
        sum += point[i];

    return sum/n;
}

float search(float point[][4], int n)
{
    int i, k;
    float sum;

    sum = 0;
    for(k=0; k<4; k++)
        sum += point[n][k];

    return sum/4;
}
