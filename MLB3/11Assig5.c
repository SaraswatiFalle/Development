// Input : iRow = 3 iCol = 4
// Output :
// 1   2    3   4
// 5   6    7   8
// 9   10   11  12

#include<stdio.h>
void DisplayPattern(int , int );

int main()
{
    int iValue1 = 0 ,iValue2 = 0;
    

    printf("Enter the no of ROWs:  ");
    scanf("%d", &iValue1);
    printf("Enter the no of COLUMNs:  ");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1 , iValue2);
    return 0;
}
void DisplayPattern(int Rows , int columns )
{
    int i = 0 , j = 0;
    
    //int iSum = 0;
    int iNo = 1;
   // char ch = '\0';
    
    for(i = 1 ;  i <= Rows;  i++)
    {

             for(j = 1 ;     j <= columns;    j++, iNo++ )
            {
                   
                         printf(" %d\t",iNo);
                         
                   
                  
            }
          printf("\n");   
    }
     
}