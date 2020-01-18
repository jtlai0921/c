#include <stdio.h>

int main()
{
    float a, b;
    float c;
    
    //a = 100;
    //b = 99;
    
    scanf("%f %f", &a, &b);
    
    c = a * b;    
    printf("%f * %f = %f \n", a, b, c);   
  
    c = a / b;    
    printf("%f / %f = %.2f \n", a, b, c);   
    
	return 0;
}

