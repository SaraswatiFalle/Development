//Write a program which accept number from user and count frequency of 2 in it.
//Input : 2395
//Output : 1
//Input : 1018
//Output : 0
//Input : 9000
//Output : 0
//Input : 922432
//Output: 3

#include<stdio.h>
int CountTwo(int);

int main()
{
    int iNo = 0;
    int Result = 0;
    printf("Enter the no: ");
    scanf("%d",&iNo);

    Result = CountTwo(iNo);
    printf("There are %d  TWO'\n", Result);
    return 0;

}
int CountTwo(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iValue > 0)
    {
         iDigit = iValue % 10;
         if (iDigit == 2)
         {
              iCnt ++;
         }
         iValue = iValue / 10;
    }

    return iCnt ;

}