// Write a program which accept string from user and accept one character. Return frequency of that character.
// Input  :  “Marvellous Multi OS”
//           M
// Output :  2
// Input  :  “Marvellous Multi OS”
//            W
// Output :  0
#include<stdio.h>
//#include<stdbool.h>
int  CountChar(char *Brr , char ch1)
{
        int icount = 0;
        while(*Brr != '\0')
        {
                if (*Brr == ch1)
               {
                   icount ++;
                         
               } 
                Brr ++;
               
               
        }
        return icount;

}
int main()
{
        char arr [20]; 
        char ch = '\0';
        int iRet = 0 ;

        printf("Enter the string : ");
        scanf("%[^'\n']s",arr);

        printf("Enter the character with you want to SEARCH in STRING: ");
        scanf(" %c",&ch); 
        

        iRet = CountChar(arr , ch);
        {
               printf("NO of characters frequency are :%d\n",iRet);   
        }

         return 0;

}