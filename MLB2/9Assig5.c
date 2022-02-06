// Accept number from user and display below pattern.
// Input : 8
// Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void DisplayP(int iNo)
{
      int iCnt = 0;
      int iSum = 1;

      for (iCnt = 1;    iCnt <= iNo;   iCnt ++)
      {
           iSum = 2 * iCnt;
           printf(" %d  ", iSum);
      }
      printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the value: ");
    scanf("%d",&iValue);

     DisplayP(iValue);
    return 0;
}





