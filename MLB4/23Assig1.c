// Write a program which accept string from user and convert it into lower case.
// Input  : “Marvellous Multi OS”
// Output : marvellous multi os
#include<stdio.h>
void strlwrX( char *ch1)          //or char
{
   while(*ch1 != '\0')
   {
        if(*ch1 >= 'A'      &&    *ch1 <= 'Z')
        {
             *ch1 =  *ch1 + 32;
            // printf(" %c ", ch1);
             
            
        }
        *ch1 ++;
    }
  
     
}
int main()
{
      char arr [20];                                                                                                          
      printf("Enter the character: ");                                                
      scanf("%[^'\n']s", arr);
      strlwrX(arr);
      
      printf("Modified string is: %s\n",arr );
    
       return 0;

}