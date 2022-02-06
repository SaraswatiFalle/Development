// 3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
// Input   :  137
// Output  :  201
#include<stdio.h>
#include<stdbool.h>
typedef unsigned  int UINT;

UINT  ToggleBit(UINT iNo , int iPos1 )
{
     
        int iMask      =     0x00000001;
        int iResult    =     0;


        iMask          =   iMask    <<   (iPos1 - 1);
        iResult        =   iNo       ^    iMask;

        return iResult;


}

int main()
{
    int iValue  =  0;
    int iRet    =  0;
    int  i      =  0;


    printf("Enter the  no : ");
    scanf("%d", &iValue);


    printf("Enter the  Position :  ");
    scanf("%d", &i);


    iRet = ToggleBit(iValue , i );
    {
        printf("Updated  no is  :%d\n", iRet);
    }
    return 0;
}

// OUTPUT : 

// Enter the  no : 137
// Enter the  Position : 7
// Updated  no is  : 201
