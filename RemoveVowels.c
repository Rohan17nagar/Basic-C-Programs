/******************************************************************************
 * Program to toggle each character in a string is discussed here. A string is given as input in 
 * which all the lower case letters are converted to upper case and the upper case letters are 
 * converted to lower case.
*******************************************************************************/
#include <stdio.h>

int main()
{

  char str[100];
  scanf("%[^\n]s",str);
  //printf("%s",str);
  
  for(int i=0;str[i]!='\0';i++){
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
          
      }
      else
      {
          printf("%c",str[i]);
      }
  }
   return 0;
}
