/******************************************************************************
* Finding the Lcm of two numbers..
*******************************************************************************/
#include <stdio.h>
int main()
{   
    int num,temp,rem; //123
    int rev = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("\nrev is %d",rev);
    return 0;
}
