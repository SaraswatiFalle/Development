// 3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
// Input   :   257
// Output  :   TRUE

//           |  0000      0000      0000        0000        0000       1001       0000        0000
//           |
//           |
// iMask  :  |   0         0         0           0          0            9           0          0

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit (UINT  iNo)
{
        UINT iMask    =   0x00000900;
        UINT iResult  =   0;
        iResult       =   iNo   &  iMask;

        if(iResult  ==   iMask)
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
     UINT iValue  =   0;
     bool bRet    =   false;

     printf("Enter the no: \n");
     scanf("%d", &iValue);

     bRet      =  CheckBit(iValue);
     if(bRet  ==  true )
     {
            printf(" 9th Bit  and  12th  Bit  is   ON \n");
     }
     else
     {
           printf(" 9th Bit   and  12th   Bit  is  OFF \n");
     }

}
