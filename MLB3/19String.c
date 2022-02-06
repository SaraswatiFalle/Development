#include<stdio.h>


char CharToggle(char c)
{
       if((c >= 'A')   &&  (c <= 'Z'))   //or  if(c >= 97   &&    c <= 122) 
       {
                return c + 32;
       }
       else if((c >= 'a')   &&  (c <= 'z'))
       {
           return c - 32;
       }
    
}
int main()
{
    char ch= '\0';
    char  cRet = '\0';
     
    printf("Enter the Character \n: ");
    scanf("%c",&ch);


    cRet = CharToggle(ch);

    printf("  Toggled  letter is: %c\n", cRet);

   
    
    return 0;


}