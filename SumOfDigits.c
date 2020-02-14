/******************************************************************************
* Finding the Lcm of two numbers..
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp; //123
    int sum = 0,rem=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while(num!=0){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    printf("\nsum is %d",sum);
    return 0;
}
