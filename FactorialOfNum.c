/******************************************************************************
* Finding the Lcm of two numbers..
*******************************************************************************/
#include <stdio.h>
int main()
{   
    int num,temp,rem; //123
    int rev = 0,sum=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        sum = sum * i;
    }
    printf("\nfactorial is %d",sum);
    return 0;
}
