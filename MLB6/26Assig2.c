// 2. Write a program which accept string from user and copy that characters of that string into another string by removing all
// white spaces.
// Input  : “Marvel lous Pyth on” 
// Output : “MarvellousPython”

#include<stdio.h>
void  StrCpyX (char *strc1 , char *dest1)
{
    while (*strc1 != '\0')
    {
        if(*strc1 != ' ')
        {
             *dest1 = *strc1;
             //strc ++;
             dest1 ++;                      
             
        } 
        strc1 ++;                    
    }
    dest1 = '\0';
    
   // printf("%s\n",dest1);                            
}
int main()
{
    char strc[20]= " Marvel lous Pyth on ";
    char dest[20];     //Empty String to copy 

    StrCpyX(strc , dest);

    printf("%s\n",dest);
    
    return 0;
}