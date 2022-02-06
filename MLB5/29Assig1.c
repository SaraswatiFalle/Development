// Complete below code snippets it contains only service provider function.
// Write entry point function to call below helper functions separately.

// 1. Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.

// Input : 10  2
// Output : TRUE



//           |  0000    1000      0001        0000        0100       0000       0100        0000
//           |
//           |
// iMask  :  |   0        8         1           0          4          0           4          0


#include<stdio.h>
#include<stdbool.h>
typedef unsigned  int UINT;

bool  ChkBit(UINT iNo , UINT iPos)
{
     
        int iMask     =   0x00000001;
        int iResult   =   0;

        if( (iPos  <   1)    ||   (iPos   >   32) )
        {
            return false;
        }


        iMask         =   iMask   <<  (iPos - 1);

        iResult       =   iNo  &  iMask;

        if(iResult  ==  iMask)
        {

                return  true;

        }
        else
        {

                return false;

        }
        

}
int main()
{
    UINT iValue  =  0 ,  i  =  0;
    bool bRet    =  false;


    printf("Enter the  no : ");
    scanf("%d", &iValue);


    printf("Enter the  Position : ");
    scanf("%d", &i);


    bRet =  ChkBit(iValue , i);
    if(bRet ==  true)
    {

              printf(" TRUE , Its  having  1  at  that  given Postion :  \n");

    }
    else
    {

              printf(" False , Its  having  0  at  that  given Postion :  \n");


    }
    return 0;
}

// OUTPUT: 

// Enter the  no : 10
// Enter the  Position : 2
//  TRUE , Its  having  1  at  that  given Postion :  
// -------------------------------------------------------
// Enter the  no : 57
// Enter the  Position : 2
// False , Its  having  0  at  that  given Postion :  