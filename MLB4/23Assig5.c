// Write a program which accept string from user and count number of white spaces
// Input : “MarvellouS”
// Output : 0
// Input : “MarvellouS  Infosystems”
// Output : 1
// Input : “MarvellouS  Infosystems  by  Piyush Manohar  Khairnnar”
// Output : 5
#include<stdio.h>
int CountWhite( char *ch1)          //or char
{
    int iCount = 0;
    while(*ch1 != '\0')
    {
         if(*ch1 == ' ')
         {
              iCount ++;
                         
         }
         *ch1 ++;


    }
    return iCount;
     
}
int main()
{
      char arr [20];
      int iRet = 0;
                                                                                                               
      printf("Enter the character: ");                                                
      scanf("%[^'\n']s", arr);
      

       iRet = CountWhite(arr);
      printf("The No of SPACES are: %d\n",iRet);
      
      
    
       return 0;

}