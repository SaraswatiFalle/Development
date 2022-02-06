// Write a program which accept string from user and toggle the case.
// Input : “Marvellous Multi OS”
// Output : mARVELLOUS mULTI os
#include<stdio.h>
void struprX(char *str1)          //or char
{
   while(*str1 != '\0')
   {
        if(*str1 >= 'A'      &&    *str1 <= 'Z')
        {
                *str1 = *str1 + 32;
             
        }
        else if(*str1 >= 'a'      &&    *str1 <= 'z')
        {
                *str1 = *str1 - 32;
             
        }
        str1 ++;


   }
     
}
int main()
{
      char arr [20];                                                                                                          
      printf("Enter the character: ");                                                
      scanf("%[^'\n']s", arr);
      struprX(arr);
      
      printf("Modified string is: %s\n",arr );
    
       return 0;

}