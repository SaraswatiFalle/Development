// Accept number from user and display below pattern.
// Input : 8
// Output : 2  4  6  8  10  12  14  16

#include<stdio.h>

void displayP(int iNo)
{

       int iCnt = 0;
       int Table = 0;

       for(iCnt = 1;    iCnt <= iNo;      iCnt++)
      {
          Table = iCnt * 2;
          printf(" %d ",Table);
          
      }
      printf("\n");

}
int main()
{
       int iValue = 0;

       printf("Enter the Number: ");
       scanf("%d",&iValue);

       displayP(iValue);
       return 0;
}