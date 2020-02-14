/******************************************************************************
 * Check Armstrong number or not..
*******************************************************************************/
#include <stdio.h>
//#include <math.h>
int power(int num,int p){
    int value;
    value  = num;
    for(int i=1;i<p;i++){
        value = num*value;
    }
    return value;
}
int main()
{
    int powerValue;
    int n=3,p=3;
    powerValue = power(n,p);
    printf("power value is :%d ",powerValue);
    return 0;
}
