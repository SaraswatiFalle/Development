// Write a program which accept one no from user & print that no of even no on screen
//input: 7
//input : 2 , 4 , 6 , 8, 10, 12, 14

#include<stdio.h>
void PrintEven(int);

int main()
{
    int iValue = 0;
    printf("Enter the no: ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}
void PrintEven(int iNo)
{
    int i = 0;

    for(i = 2;  i <= 2*iNo;   i++ )
    {
             if((i % 2) == 0)
            {
                printf("%d", i);
            }
            printf(" \n ");
    }

}