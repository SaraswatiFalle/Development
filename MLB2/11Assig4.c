// Input : iRow = 4 iCol = 5
// Output :
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1


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
    char ch1 = '\0';
   // char ch = '\0';
    
    for(i = Rows ;  i >= 1;  i--)
    {

             for(j = 1 ;     j <= columns;    j++ )
            {
                   printf(" %d ", i );
                   
            }
          printf("\n");   
    }
     
}