//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)
#include<stdio.h>
int CheckDiff(int);

int main()
{
    int iNo = 0;
    int Result = 0;

    printf("Enter the no: ");
    scanf("%d", &iNo);

    Result = CheckDiff(iNo);
   {
      printf("The Difference Between EVEN and Odd: %d\n",Result);
   }    

 }
    int CheckDiff(int iValue)
    {
        int iDigit = 0;
        int iSum1 = 0;
        int iSum2 = 0; 


        while(iValue > 0)
        {
            iDigit = iValue % 10;
            if ((iDigit % 2 ) == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            if((iDigit % 2) != 0)
            {
                iSum2 = iSum2 + iDigit;
            }
            iValue = iValue / 10;
        }
        return iSum1 - iSum2 ;
    }