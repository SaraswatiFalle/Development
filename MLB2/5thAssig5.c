//Write a program which accept number from user and count frequency of such a digits which are less than 6.
//Input : 2395
//Output : 3
//Input : 1018
//Output : 3
//Input : 9440
//Output : 3
//Input : 96672
//Output : 1

#include<stdio.h>
int LessThanSix(int);

int main()
{
    int iNo = 0;
    int Result = 0;
    printf("Enter the no: ");
    scanf("%d",&iNo);

    Result = LessThanSix(iNo);
    printf("There are %d  Digits Which are LESS than SIX'\n", Result);
    return 0;

}
int LessThanSix(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iValue > 0)
    {
         iDigit = iValue % 10;
         if (iDigit < 6)
         {
              iCnt++;
         }
         iValue = iValue / 10;
    }

    return iCnt ;

}