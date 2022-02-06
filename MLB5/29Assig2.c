// 2. Write a program which accept one number and position from user and off that bit. Return modified number.

// Input  :  10  2
// Output :  8

#include<stdio.h>

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

// Enter the  no: 10
// Enter the  Position: 2
// Updated  no is  :8