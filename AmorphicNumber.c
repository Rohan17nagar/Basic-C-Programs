/******************************************************************************
 * if the unit digit square of a number is equal to the real number..
 * example : 5 is amorphic number.
 * 5*5 = 25.
 * hence unit digit of 25 is 5.
*******************************************************************************/
#include <stdio.h>
int main()
{
    int num;
    int temp,temp1;
    printf("Enter a number");
    scanf("%d",&num);
    temp = num;
    temp = temp * temp;
    if((temp%10)==num){
        printf("amorphic number");
    }
    else{
        printf("Not amorphic");
    }
    return 0;
}
