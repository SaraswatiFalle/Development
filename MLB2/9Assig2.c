// Accept number from user and display below pattern.
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void displayP(int iNo)
{

       int iCnt = 0;

       for(iCnt = iNo;    iCnt >= 1;      iCnt-- )
      {
          printf("%d # ",iCnt);
          
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