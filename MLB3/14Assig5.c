//Input : iRow = 4 iCol = 4
//Output : 
//      1   2   3   4
//          2   3   4
//              3   4
//                  4


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
    int i = 0;
    int j = 0;
    
    for(i = 1;  i <= Rows;  i++)
    {

             for(j = 1;  j <= columns;   j++)
            {
                    if(i <= j)
                    {
                          printf(" %d\t" , j);
                    }
                    
            }
            printf("\n");   
    }
     
}