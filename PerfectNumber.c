/******************************************************************************
 * Perfect Number or Not.
 * Example --> 6 is perfect number.
 * divisors sum is equal to number..
 * 1+2+3 = 6
 * and 1 , 2,3 are the divisors of 6.
*******************************************************************************/
#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(sum==num){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect.");
    }
    return 0;
}
