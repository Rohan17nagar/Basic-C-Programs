/******************************************************************************
 * Sorting of string in alphabetical order..
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],temp;
    int len=0,i,j;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(str[i]>str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for(i=0;i<len;i++){
        printf("%c",str[i]);
    }
    return 0;
}
