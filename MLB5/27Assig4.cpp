// 4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.

//           |  0000      0000      0000        0000        0000       0001       1100        0000
//           |
//           |
// iMask  :  |   0         0         0           0          0          1           C          0

#include<stdio.h>
#include<stdbool.h>
typedef unsigned  int UINT;

bool CheckBit(UINT iNo)
{
     
        UINT iMask    =   0x000001C0;
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
        printf("The 7th , 8th and 9th Bits are ON :\n");
    }
    else
    {
         printf("The 7th , 8th and 9th Bits are OFF :\n");
    }

}

// OUTPUT :
// Enter the  no: 1049024
// The 7th , 8th and 9th Bits are ON :
// ------------------------------------------------------------------
// Enter the  no: 1048896
// The 7th , 8th and 9th Bits are OFF :

