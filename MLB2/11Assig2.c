//Input : iRow = 4 iCol = 4
// Output :
// A B C D
// a b c d
// A B C D
// a b c d

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
    char ch = '\0';
    char ch1 = '\0';
    
    
    for(i = 1 ;    i <= Rows;    i++ )
    {

             for(j = 1 , ch = 'A', ch1 = 'a' ;      j <= columns;      j++, ch++, ch1++ )
            {    
                    if(( i % 2 ) != 0)
                   {
                          printf("%c\t", ch);
                   }
                   else 
                   {
                          printf("%c\t", ch1);
                   }
                
            }
          printf("\n");   
    }
     
}