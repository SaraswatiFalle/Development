// Write a program which accept range from user and display all numbers in between that range.
// Input : 23 35
// Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

// Input : 10 18
// Output : 10 11 12 13 14 15 16 17 18

// Input : 10 10
// Output : 10

// Input : -10 2
// Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

// Input : 90 18
// Output : Invalid range

#include<stdio.h>
void RangeDisplay(int , int );
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    

    printf(" Enter the First Value: ");
    scanf("%d", &iValue1);

    printf(" Enter the Second Value: ");
    scanf("%d", &iValue2);

     RangeDisplay(iValue1 , iValue2);
    
    
} 
void RangeDisplay(int x , int y)
{
    
    int i = 0;
    
    ///if(x < 0)
   // {
     //   x = -x;    //updator
    //}

    for (i = x ;  i <= y;  i++)
    {
        printf(" %d ",i);

        
                  
    }
   
    
}
