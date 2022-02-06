// Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
// Input : “Marvellous Multi OS”
// Output : “Marvellous Multi OS”             in another string
#include<stdio.h>
void  StrCpyX (char *strc , char *dest)
{
    while (*strc != '\0')
    {
        *dest = *strc;
        strc ++;
        dest ++;                         //<-------  cut that dest++;
        //printf("%c", *dest ++);               // only write printf("%c", *dest ++);
    }
    //return dest;
     printf("%s\n",dest);                            //<-------  cut that ;
}
int main()
{
    char strc[20]= " Marvellous Multi OB ";
    char dest[20];     //Empty String to copy 

    StrCpyX(strc , dest);

   // printf("%s\n",dest);
    
    return 0;
}