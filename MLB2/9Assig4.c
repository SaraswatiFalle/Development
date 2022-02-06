// Accept number from user and display below pattern.
// Input : 4
// Output : # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>

void DisplayP(int iNo)
{
      int iCnt = 0;

      for (iCnt = 1;    iCnt <= iNo;   iCnt ++)
      {
           printf("# %d * ", iCnt);
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





