//Write a program which accept number from user and return multiplication of all digits.
//Input : 2395
//Output : 270
//Input : 1018
//Output : 8
//Input : 9440
//Output : 144
//Input : 922432
//Output : 864
#include<stdio.h>
int MultDigit(int);

int main()
{
    int iNo = 0;
    int Result = 0;
    printf("Enter the no: ");
    scanf("%d",&iNo);

    Result = MultDigit(iNo);
    printf("The Multiplicatuion is: %d\n", Result);
    return 0;

}
int MultDigit(int iValue)
{
    int iDigit = 0;
    int Mult = 1;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    while (iValue > 0)
    {
         iDigit = iValue % 10;
         if(iDigit != 0)
         {
             Mult = Mult * iDigit;
         }

         iValue = iValue / 10;
    }

    return Mult ;

}