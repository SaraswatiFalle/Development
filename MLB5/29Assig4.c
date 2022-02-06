// 4. Write a program which accept one number and position from user and toggle that bit. Return modified number.
// Input  :  10  3
// Output :  14

#include<stdio.h>

typedef unsigned  int UINT;

int  ONBit(int iNo , int iPos)
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


    iRet =  ONBit(iValue , i);
    {
        printf("Updated  no is  :%d\n", iRet);
    }
    return 0;
}
// OUTPUT :-

// Enter the  no: 10
// Enter the  Position: 3
// Updated  no is  : 14

// Enter the  no: 15
// Enter the  Position: 5
// Updated  no is  :31