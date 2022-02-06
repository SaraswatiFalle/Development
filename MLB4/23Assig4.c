// Write a program which accept string from user and display only digits from that string.
// Input  : “marve89llous121”
// Output : 89121
// Input  : “Demo”
// Output :
#include<stdio.h>
void DisplayDigit( char *ch1)        
{
   while(*ch1 != '\0')
   {
        if(*ch1 >= 48      &&    *ch1 <= 57)
        {
              printf("%c", *ch1);
                         
        }
        *ch1 ++;


   }
     
}
int main()
{
      char arr [20];                                                                                                          
      printf("Enter the character: ");                                                
      scanf("%[^'\n']s", arr);
      DisplayDigit(arr);
      
      
    
       return 0;

}