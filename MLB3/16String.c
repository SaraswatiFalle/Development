#include<stdio.h>


char SmallToCaptial(char c)
{
       if(c >= 'a'   &&  c <= 'z')   //or  if(c >= 97   &&    c <= 122) 
       {
                return c - 32;
       }
    
}

int main()
{
    char ch= '\0';
    char  CRet = '\0';
     
    printf("Enter the Character: ");
    scanf("%c",&ch);


    CRet = SmallToCaptial(ch);
    printf("  Capital letter is %c", CRet);

   
    
    return 0;


}