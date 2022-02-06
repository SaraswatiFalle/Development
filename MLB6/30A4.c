// 4. Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

// Input  :  10  3  7
// Output :  TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned  int UINT;

bool  ChkBit(UINT iNo , int iPos1 , int iPos2)
{
     
        int iMask1     =   0x00000001 , iMask2     =   0x00000001;
        int iMask      =   0;
        int iResult    =   0;


        iMask1         =   iMask1   <<  (iPos1 - 1);
        iMask2         =   iMask2   <<  (iPos2 - 1);

        iMask          =   iMask1    |   iMask2;
        iResult        =   iNo       ^   iMask;                      // NOT DONE

        return iResult;
        

}
int main()
{
    int iValue   =    0;
    bool bRet    =    0;
    int  i       =    0;
    int  j       =    0;


    printf("Enter the  no  :  ");
    scanf("%d", &iValue);


    printf("Enter the  Position 1 :  ");
    scanf("%d", &i);

     printf("Enter the  Position 2 :  ");
    scanf("%d", &j);


    bRet = ChkBit(iValue , i , j);
    if(bRet == true)
    {
        printf(" true tHE BITS ARE ON :\n");
    }
    else
    {
         printf(" false the  BITS ARE OFF :\n");
    }

    return 0;
}
