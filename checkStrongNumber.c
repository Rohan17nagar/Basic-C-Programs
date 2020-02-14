/******************************************************************************
 * 
*******************************************************************************/
#include <stdio.h>
//#include <math.h>
int fact(int rev){
    int num=rev;
    for(int i=rev-1;i>0;i--){
        num = num*i;
    }
    return num;
}
int main()
{
    int num,temp,rev,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        rev = temp%10;
        sum = sum + fact(rev);
        temp = temp/10;
    }
    if(num==sum){
        printf("Strong number");
    }
    else{
        printf("not strong number");
    }
    return 0;
}
