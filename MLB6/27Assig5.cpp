// 5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means 
// bit number 32.

//           |  1000      0000      0000        0000        0000       0000       0000        0001
//           |
//           |
// iMask  :  |   8         0         0           0          0          0           0          1

#include<stdio.h>
#include<stdbool.h>
typedef unsigned  int UINT;

bool CheckBit(UINT iNo)
{
     
        UINT iMask    =   0x80000001;
        UINT iResult  =   0;
        iResult       =   iNo   &  iMask;

        if(iResult == iMask)
       {
            return true;
       }
        else
       {
            return false;
       }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the  no: ");
    scanf("%d", &iValue);

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf(" TRUE, The bits  are ON :\n");
    }
    else
    {
         printf(" FALSE, The bits are OFF :\n");
    }
}

// OUTPUT:
// Enter the  no: 2147483649
// The 1th and LAST Bit(means 32th Bit)  are ON :
//----------------------------------------------------------------------------
// Enter the  no: 2147483648
// The 1th and LAST Bit(means 32th Bit)  are OFF :
