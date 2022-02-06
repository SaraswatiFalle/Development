// Write a program which accept string from user and convert it into upper case.
// Input : “Marvellous Multi OS”
// Output : MARVELLOUS MULTI OS
#include<stdio.h>
char struprX( char *ch1)          //or char
{
   while(*ch1 != '\0')
   {
        if(*ch1 >= 'a'      &&    *ch1 <= 'z')
        {
             *ch1 =  *ch1 - 32;
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