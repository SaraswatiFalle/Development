//Write a program which accept number from user and display its digits in reverse order.
//Input : 2395
//Output : 5
//9
//3
//2
//Input : -1018
//Output : 8
//1
//0
//1
//Input : 9000
//Output : 0
//0
//0
//9

#include<stdio.h>
void DisplayRev(int);

int main()
{
    int iNo = 0;
    printf("Enter the NO: ");
    scanf("%d", &iNo);

    DisplayRev(iNo);
}
void DisplayRev(int iValue)
{

     int iDigit = 0;

     if(iValue < 0)
     {
          iValue = -iValue;
     }

     while(iValue > 0)
    {
          iDigit = iValue % 10;
          printf("%d \n",iDigit);
          iValue = iValue / 10;

     }
}
