// Write a program which accept number from user and check whether it contains 0 in it or not.
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It Contains Zero
// Input : 9000
// Output : It Contains Zero
#include<stdio.h>
#include<stdbool.h>
bool CheckZero(int );

int main()
{
    int iNo = 0;
    bool Result = 0;
    printf("Enter the NO: ");
    scanf("%d", &iNo);

    Result = CheckZero(iNo);
    if(Result == true)
    {
        printf(" There is ZERO\n ");
    }
    else
    {
        printf("There is NOT ZERO\n ");
    }
    return 0;
}
bool CheckZero(int iValue)
{

     int iDigit = 0;
     
     while(iValue > 0)
    {
          iDigit = iValue % 10;

          if( iDigit == 0)
          {
              return true;
          }
          else
          {
              return false;
          }

          iValue = iValue / 10;

     }
}
