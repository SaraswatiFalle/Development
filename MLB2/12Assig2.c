// Input : iRow = 4 iCol = 4
// Output :
// *  *  *  *
// *  *  *  #
// *  *  #  #
// *  #  #  #


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
    
    int iSum = 0;
   
    
    for(i = 4 ;  i >= 1;  i--)
    {

             for(j = 1 ;     j <= 4;    j++ )
             {
                    if(i >= j)
                    {
                  
                       printf(" *\t");
                    }
                    else 
                    {
                               printf(" #\t");
                    }
             }     
          
          printf("\n");   
    }
     
}
