// Complete below code snippets it contains only service provider function.
// Write entry point function to call below helper functions separately.

// 1. Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

#include<iostream>
using namespace  std;

int CountBit(int iNo)
{
    int i = 0, iCnt = 0, iResult = 0;

    int iMask = 0x00000001;

    for(i = 1;  i < 32;   i++)
    {
            iResult  =  iNo   &  iMask;
            if(iResult != 0)
           {
                iCnt ++;
           }
           iMask  = iMask  << 1 ;
    }
    return  iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout <<" Enter the no: ";
    cin >> iValue;

    iRet = CountBit (iValue);

    cout <<" No of Bit which are ON: " << iRet <<"\n";
    
    return 0;
}

// OUTPUT: 
// Enter the no : 56271
// No of Bit which are ON : 12