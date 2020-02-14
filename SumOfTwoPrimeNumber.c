/******************************************************************************
 * Number can be expressed as sum of two prime numbers in c.
 * Example 20 --> 17 and 3
*******************************************************************************/
#include <stdio.h>
int main()
{
    int j;
    int flag = 0;
    int num,i;
    int arr[100],z=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        flag = 0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            arr[z] = i;
            z++;
        }
    }
    for(i=0;i<z-1;i++){
        for(j=i+1;j<z;j++){
            if((arr[i]+arr[j])==num){
                printf("%d and %d are the prime sum of %d\n",arr[i],arr[j],num);
            }
        }
    }
    return 0;
}
