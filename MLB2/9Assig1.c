// Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E

#include<stdio.h>
//void displayP(int);

void displayP(int iNo)
{
       char ch = '\0';
       int iCnt = 0;

       for(iCnt = 1 ,ch = 'A';    iCnt <= iNo;      iCnt++ , ch++)
      {
          printf("%c\t ", ch);
          
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