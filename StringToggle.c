/******************************************************************************
 * Program to toggle each character in a string is discussed here. A string is given as input in 
 * which all the lower case letters are converted to upper case and the upper case letters are 
 * converted to lower case.
*******************************************************************************/
#include <stdio.h>

int main()
{

   char ch[100];
   int i;
   scanf("%[^\n]s",ch);
   for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i]-32;
        }
        else if(ch[i]>='A' && ch[i]<='Z')
        ch[i] = ch[i]+32;
   }
   for(i=0;ch[i]!='\0';i++){
       printf("%c",ch[i]);
   }
   
   return 0;
}
