// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
// Input   :   “Marvellous Multi OS”
//         :    e
// Output  :   TRUE
// Input   :   “Marvellous Multi OS”
//         :   W
// Output  :   FALSE
#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *str , char ch1)
{
        int icnt = 0 ;

        while(*str != '\0')
        {
                if (*str == ch1)
               {
                   icnt ++;
                         
               } 
               
               str++;
        }

        if(icnt >= 1)
        {
            return true;
        }
        else
        {
            return false;
        }

}
int main()
{
        char arr [20]; 
        char ch = '\0' ;
        bool bRet = false ;

        printf("\nEnter the string : ");
        scanf("%[^'\n']s",arr);

        printf("\nEnter the character with you want to SEARCH in STRING: ");
        scanf(" %c",&ch);


        bRet = ChkChar(arr , ch);
        if(bRet == true)
        {
               printf("TRUE character is present\n");   
        }
        else
        {
              printf("FALSE character is Not present\n");
        }

         return 0;

}