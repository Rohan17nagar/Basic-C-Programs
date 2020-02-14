/******************************************************************************

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter the first number\n");
    scanf("%d",&num1);
    
    printf("enter the second number\n");
    scanf("%d",&num2);
    
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("%d and %d",num1,num2);
    return 0;
}
