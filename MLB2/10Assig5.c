//Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 4
// Output : 
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4


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

             for(j = 1;  j <= Colums;   j++)
            {        

                     printf("%d\t",i);
            }

                printf("\n");
    }
}


