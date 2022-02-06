// 5. Write a program which accept one number from user and on its first 4 bits. Return modified number.
// Input  :  73
// Output :  79

//           |  0000      0000      0000        0000        0000       0000       0000        1111
//           |                                                                     
//           |
// iMask  :  |   0         0         0           0          0          0           0          F


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0x0000000F;
    //     1111    0000        0000        0000     0000      0000         0000     1111
    //      F       0           0           0        0           0           0         F
    // 0xF000000F
    
    UINT iResult = 0;

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"Enter number\n";
    cin>>iValue;
    
    iRet = ToggleNibble(iValue);
    // printf("%u",iRet);
    cout<<"Updated number is : "<<iRet<<"\n";
    return 0;
}
