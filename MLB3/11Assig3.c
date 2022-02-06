// Input : iRow = 3 iCol = 5
// Output :
// A A A A A
// B B B B B
// C C C C C

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
    
    for(i = 1 , ch1 = 'A';  i <= Rows;  i++ , ch1++)
    {

             for(j = 1 ;     j <= columns;    j++ )
            {
                   if((i % 2) != 0)
                   {
                          printf("%c\t" , ch1);
                   }
                   else
                   {
                           printf("%c\t" , ch1);     
                   }
            }
          printf("\n");   
    }
     
}