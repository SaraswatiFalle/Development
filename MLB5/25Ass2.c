// Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
// Input : “Marvellous Multi OS”

//         10

// Output : “Marvellous

#include<stdio.h>
char  StrNCpyX (char *strc , char *dest , int iCnt)
{
    while ( *strc != '\0'  &&  iCnt != 0 )
    {
        *dest = *strc;
        strc ++;
        dest ++; 
        iCnt --;                             
    }

}  
int main()
{
    char strc[20]= " Marvellous Multi OB ";
    char dest[20];     //Empty String to copy 

    StrNCpyX(strc , dest, 11);

    printf("%s\n",dest);
    
    return 0;
}