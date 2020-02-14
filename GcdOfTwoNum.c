/******************************************************************************
* Finding the Lcm of two numbers..
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,gcd=1;
    int i;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++){
        if((a%i==0)&&(b%i==0)){
            gcd = i;
        }
    }
    printf("\nGCD of two numbers is %d",gcd);
    return 0;
}
