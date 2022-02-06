// 2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//   Input :   10 15 (1010 1111)
//  Output :    2 4

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

int main()                                              // NOT DONE
{
    int iValue1 = 0, iRet = 0 ,iValue2 = 0;

    cout <<" Enter the 1st no : ";
    cin >> iValue1;
    cout <<" Enter the 2nd no : ";
    cin >> iValue2;

    iRet = CountBit (iValue1 , iValue2);

    cout <<" No of Bit which are ON: " << iRet <<"\n";
    
    return 0;
}