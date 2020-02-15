/******************************************************************************
 * Removing brackets from the string..
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==')' || str[i]=='('){}
        else{
            printf("%c",str[i]);
        }
    }
    return 0;
}
