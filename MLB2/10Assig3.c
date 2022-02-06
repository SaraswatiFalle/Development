//Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 5
// Output :
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1


#include<stdio.h>
void DisplayPattern(int , int);

int main()
{
    int iValue1 = 0 , iValue2 =0;
    
    printf("Enter the no of ROWs: ");
    scanf("%d", &iValue1);
    printf("Enter the no of COLUMNS: ");
    scanf("%d", &iValue2);

    DisplayPattern(iValue1 , iValue2 );
    return 0;
}
void DisplayPattern(int Rows , int Colums )
{
    int i = 0;
    int j = 0;
   
    
    for(i = 1;  i <= Rows;  i++)
    {

             for(j = Colums;  j >= 1;   j--)
            {
                     printf("%d ", j);
            }

                printf("\n");
    }
}