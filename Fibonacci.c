/******************************************************************************
* Finding the Lcm of two numbers..
*******************************************************************************/
#include <stdio.h>
int main()
{   
    int num1=0,num2=1;
    int upto;
    printf("Enter the numbers upto:\n");
    scanf("%d",&upto);
    int i=0;
    while(i<=upto){
        printf("%d ",i);
        num1 = num2;
        num2 = i;
        i = num1+num2;
    }
  //  printf("\nfactorial is %d",sum);
    return 0;
}
