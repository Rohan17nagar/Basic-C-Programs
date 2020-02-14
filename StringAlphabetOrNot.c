/******************************************************************************
Alphabet or not..
*******************************************************************************/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character values:\n");
       scanf("%c",&c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        printf("Alphabet");
    }
    else{
        printf("Not Alphabet");
    }
    
    return 0;
}
