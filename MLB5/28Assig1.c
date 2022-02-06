// Complete below code snippets it contains only service provider
// function.
// Write entry point function to call below helper functions separately.

// 1.Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

              // Enter the 79 no  and hence 7th its 7th  bit is ON [ MAKE IT OFF ]? 
//           |  1000      0000      0000        0000        0000       0000       0100        1111
//           |                                                                     7th bit is ON of 79th Bit  Now MAKE IT OFF (MEANS MAKE 0)
//           |
// iMask  :  |   8         0         0           0          0          0           4          1

#include<stdio.h>
//#include<stdbool.h>
typedef unsigned  int UINT;

int  OFFBit(int iNo , int iPos)
{
     
        int iMask     =   0x00000001;
        int iResult   =   0;


        iMask         =   iMask   <<  (iPos - 1);
        iResult       =   iNo  ^  iMask;
        return iResult;
        

}
int main()
{
    int iValue  =  0;
    int iRet    =  0;
    int  i      =  0;


    printf("Enter the  no: ");
    scanf("%d", &iValue);


    printf("Enter the  Position: ");
    scanf("%d", &i);


    iRet =  OFFBit(iValue , i);
    {
        printf("Updated  no is  :%d\n", iRet);
    }
    return 0;
}

// OUTPUT :-
// Enter the  no: 79
// Enter the  Position: 7
// Updated  no is  :15
