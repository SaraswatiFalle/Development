//Write a program which accept range from user and display all even numbers in between that range.
// Input : 23 35
// Output :  24  26  28 30  32  34 

// Input : 10 18
// Output : 10  12  14  16  18

// Input : 10 10
// Output : 10

// Input : -10 2
// Output : -10  -8  -6  -4  -2  0  2

// Input : 90 18
// Output : Invalid range

#include<stdio.h>
void RangeDisplayEven(int , int );
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    

    printf(" Enter the First Value: ");
    scanf("%d", &iValue1);

    printf(" Enter the Second Value: ");
    scanf("%d", &iValue2);

     RangeDisplayEven(iValue1 , iValue2);
    
    
} 
void RangeDisplayEven(int x , int y)
{
    
    int i = 0;

    for (i = x ;  i <= y;  i++)
    {
        if((i % 2) == 0)
        {
           printf(" %d ",i);
        }
        
    }
   
    
}
