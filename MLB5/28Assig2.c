// 2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
#include<stdio.h>

typedef unsigned  int UINT;

UINT  OFFBit(UINT iNo , int iPos1 , int iPos2)
{
     
        int iMask1     =   0x00000001 , iMask2     =   0x00000001;
        int iMask      =   0;
        int iResult    =   0;


        iMask1         =   iMask1   <<  (iPos1 - 1);
        iMask2         =   iMask2   <<  (iPos2 - 1);

        iMask          =   iMask1    |   iMask2;
        iResult        =   iNo       ^   iMask;

        return iResult;
        

}
int main()
{
    int iValue  =  0;
    int iRet    =  0;
    int  i      =  0;
    int  j      =  0;


    printf("Enter the  no: ");
    scanf("%d", &iValue);


    printf("Enter the  Position 1: ");
    scanf("%d", &i);

    printf("Enter the  Position 2: ");
    scanf("%d", &j);


    iRet = OFFBit(iValue , i , j);
    {
        printf("Updated  no is  :%d\n", iRet);
    }
    return 0;
}

// OUTPUT :-
//  Enter the  no           :     577
//  Enter the  Position 1   :     7
//  Enter the  Position 2   :     10
//  Updated  no is          :      1