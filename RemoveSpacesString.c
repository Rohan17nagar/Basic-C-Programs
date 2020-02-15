/******************************************************************************
 * Removing Spaces from the string..
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            while(str[i]=='32'){}
        }
        else{
            printf("%c",str[i]);
        }
    }
    return 0;
}
