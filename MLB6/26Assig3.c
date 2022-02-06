// 3. Write a program which accept string from user and copy that characters of that string into another string by converting
// all small characters into capital case.
// Input  : “Marvellous Python 2”
// Output : “MARVELLOUS PYTHON 2”
#include<stdio.h>
void  StrCpyX (char *strc , char *dest)
{
    while (*strc != '\0' )
    {
        if(*strc = 'a'     &&  *strc   = 'z')
        {
             *strc - 32;
             *dest = *strc;
             strc ++;
             dest ++;  
        }                      
    }                                     //NOT DONE

    
     printf("%s\n",dest);                           
int main()
{
    char strc[20]= " marvellous multi ob ";
    char dest[20];     //Empty String to copy 

    StrCpyX(strc , dest);

   // printf("%s\n",dest);
    
    return 0;
}