//Write a program which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output: 0
#include<stdio.h>
int CountRange(int);

int main()
{
    int iNo = 0;
    int Result = 0;
    printf("Enter the no: ");
    scanf("%d",&iNo);

    Result = CountRange(iNo);
    printf("The Digits comes Between 3 to 7  are: %d\n", Result);
    return 0;

}
int CountRange(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    while (iValue > 0)
    {
         iDigit = iValue % 10;
         if(iDigit > 3   &&  iDigit < 7)
         {
             iCnt ++;
         }

         iValue = iValue / 10;
    }

    return iCnt ;

}
