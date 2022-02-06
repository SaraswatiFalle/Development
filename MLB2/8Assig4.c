//Write a program which accept range from user and return addition of all even numbers in between that range.(Range should contains positive numbers only)
//Input : 23 30
// Output : 108

// Input : 10 18
// Output : 70

// Input : -10 2
// Output : Invalid range

// Input : 90 18
// Output : Invalid range
#include<stdio.h>
int RangeSumEven(int , int );
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int Result = 0;
    

    printf(" Enter the First Value: ");
    scanf("%d", &iValue1);

    printf(" Enter the Second Value: ");
    scanf("%d", &iValue2);

     Result = RangeSumEven(iValue1 , iValue2);
     {
         printf("The addition of the given range is : %d\n ", Result);
     }
    
    
} 
int RangeSumEven(int x , int y)
{
    
    int i = 0;
    int iSum = 0;

    for (i = x ;  i <= y;  i++)
    {
           if((i % 2) == 0)
           {
               iSum =iSum + i;
           }
           
           
    }
    return iSum;
   
    
}
