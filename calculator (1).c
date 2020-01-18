#include <stdio.h>

int main()
{
    float a, b;
    float c;
    char op;
    int i;
    
    i=0;
    while(i<3)
    {    
        printf("Please input two numbers: ");
        scanf("%f %f", &a, &b);
        
        printf("Please input operator (+-*/): ");
        scanf(" %c", &op);
    
        if(op=='+')
        {
            c = a + b;    
            printf("%f + %f = %f \n", a, b, c);
        }
        else if(op=='-')
        {
            c = a - b;    
            printf("%f - %f = %f \n", a, b, c);
        }
        else if(op=='*')
        {
            c = a * b;    
            printf("%f * %f = %f \n", a, b, c);   
        }
        else if(op=='/')
        {
            c = a / b;    
            printf("%f / %f = %.2f \n", a, b, c);   
        }
        
        i++; 
    }
    
	return 0;
}

