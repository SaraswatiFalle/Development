// 2. Write a program which checks whether 5th & 18th bit is On or OFF.

//           |  0000    0000      0000        0010        0000       0000       0001        0000
//           |
//           |
// iMask  :  |   0        0         0           2          0          0           1          0

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit (UINT  iNo)
{
        UINT iMask    =   0x00020010;
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
            printf(" 5th Bit  and  18th  Bit  is   ON \n");
     }
     else
     {
           printf(" 5th Bit   and  18th   Bit  is  OFF \n");
     }

}

// Enter the no: 
//       131088
// 5th Bit  and  18th  Bit  is   ON 
//-----------------------------------------------------------------
// Enter the no: 
//           16
// 5th Bit   and  18th   Bit  is  OFF 