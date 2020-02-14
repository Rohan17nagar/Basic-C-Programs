/******************************************************************************
 * Check Armstrong number or not..
*******************************************************************************/
#include <stdio.h>
#include <math.h>
/*int power(int num,int p){
    for(int i=1;i<p;i++){
        num = num*num;
    }
    return num;
}*/
int main()
{
    int count=0,num,sum=0,temp,i,rem;
    printf("Enter the number");
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        temp = temp/10;
        count++;
    }
    temp = num;    
    for(i=0;i<count;i++){
        rem = temp%10;
        sum = sum+pow(rem,count);
        temp = temp /10;
    }
    if(sum == num){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
    return 0;
}
