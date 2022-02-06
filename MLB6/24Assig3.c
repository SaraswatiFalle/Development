// Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
// Input   :   “Marvellous Multi OS”
//              M
// Output  :    0
// Input   :   “Marvellous Multi OS”
//              W
// Output  :   -1
//  Input  :   “Marvellous Multi OS”
//              e
// Output  :    4
#include<stdio.h>
int  FirstChar(char *Brr , char ch1 )
{
        int iCnt = 0;
       // for(Brr = 0;    Brr < )
        while(*Brr != '\0' )
        {
                 if (*Brr == ch1)
               {
                   break ;
                         
               } 
                Brr ++;
                iCnt ++;
               
               
        }
        
           if(iCnt == )
          {
                return -1;  
          }
          else
          {
             return iCnt;
          }
                                                                 ///  DONE PROGRAM but NOT TAKING -1
 
}
int main()
{
        char arr [20]; 
        char  ch   =  '\0';
        int  iRet  =   0 ;

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