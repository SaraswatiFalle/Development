// 4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
// Input  : “Marvellous Multi OS”
// M
// Output : 11
// Input  : “Marvellous Multi OS”
// W
// Output : -1
//  Input : “Marvellous Multi OS”
// e
// Output : 4

#include<stdio.h>
int  FirstChar(char *Brr , char ch1 )
{
        int iCnt = 18;
        int end  = Brr;


        while( *end != '\0')
        {
                end ++;
        }
        end --;

        while(*end != '\0' )
        {
                if (*end == ch1)
               {
                   break ;
                         
               } 
                end --;
                iCnt --;
               
               
        }
        return iCnt;


}


int main()
{                                       // NOT DONE PROGRAM
        char arr [20]; 
        char ch = '\0';
        int iRet = 0 ;

        printf("Enter the string : ");
        scanf("%[^'\n']s",arr);

        printf("Enter the character with you want to SEARCH in STRING: ");
        scanf(" %c",&ch); 
        

        iRet = FirstChar(arr , ch);
        {
               printf("NO of characters frequency are :%d\n",iRet);   
        }

         return 0;

}