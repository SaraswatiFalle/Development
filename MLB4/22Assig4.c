// Write a program which accept string from user and check whether it contains vowels in it or not.
// Input : “marvellous”
// Output : TRUE
// Input : “Demo”
// Output : TRUE
// Input : “xyz”
// Output : FALSE
#include<stdio.h>
#include<stdbool.h>
bool ChkVowels(char *str)
{
     //int iCount1 = 0, iCount2 = 0;

     int iCnt = 0;
     while(*str != '\0')
     {
          // if(*str >= 65     &&   *str <= 122)
          // {
                 if(  *str == 'a' ||  *str == 'e' ||  *str == 'i'  || *str == 'o' ||  *str == 'u')  
                 {
                      iCnt ++;
                 }
                 
                 *str ++;
     }
     if(iCnt >= 1)
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
    char Arr[20];
    bool iRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n']s",Arr);


    iRet = ChkVowels(Arr);
    if (iRet == true)
    {
            printf("TRUE Contains Vowels\n");
    }
    else
    {
        printf(" FALSE There is Not Vowles\n");
    }
    return 0;

}