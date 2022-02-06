//Write a program which accept number from user and return the count of odd digits.
//Input : 2395
//Output : 3
//Input : 1018
//Output : 2
//Input : -1018
//Output : 2
//Input : 8462
//Output : 0

#include<stdio.h>
int CountEven(int);

int main()
{
    int iNo = 0;
    int Result = 0;
    printf("Enter the no: ");
    scanf("%d",&iNo);

    Result = CountEven(iNo);
    printf("There are %d even numbers\n", Result);
    return 0;

}
int CountEven(int iValue)
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
         if ((iDigit % 2) == 0)
         {
              iCnt ++;
         }
         iValue = iValue / 10;
    }

    return iCnt ;

}