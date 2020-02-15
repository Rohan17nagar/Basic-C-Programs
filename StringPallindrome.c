/******************************************************************************
 * Program to toggle each character in a string is discussed here. A string is given as input in 
 * which all the lower case letters are converted to upper case and the upper case letters are 
 * converted to lower case.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{

 int len,i,c=0,count=0;
  char str[100],strrev[100];
  scanf("%[^\n]s",str);
  //printf("%s",str);
  
 len = strlen(str);
  for(i=len-1;i>=0;i--){
      strrev [c]= str[i];
      c++;
  }
  
  for(i=0;str[i]!='\0';i++){
    if(str[i]==strrev[i]){
    }
    else{
        count++;
        break;
    }
  }
  if(count>0){
      printf("String Not pallindrome..");
  }
  else{
      printf("strin pallindrome");
  }
  
   return 0;
}
