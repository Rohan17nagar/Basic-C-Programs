/******************************************************************************
Check case of a character
*******************************************************************************/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character values:\n");
       scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("Upper");
    else if(c>='a' && c<='z')
        printf("Lower");
    else
        printf("special symbol");
   
    return 0;
}
