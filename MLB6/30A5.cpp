// 5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo , int iStart , int iEnd)
{
    UINT  iMask1 = 0xFFFFFFFF , iMask2 = 0xFFFFFFFF, iMask = 0;
    UINT iResult = 0;

    iMask1   =  iMask1 << (iStart - 1);
    iMask2   =  iMask2 >> (32 - iEnd);

      iMask     =    iMask1  &  iMask2 ;
     iResult    =    iNo  ^   iMask;

    return iResult;
}
int main()
{
    UINT  iValue = 0  , iRet = 0 , i , j ;

    cout << "Enter the no \n";
    cin >> iValue;

    cout<< "Enter the Starting postion \n";
    cin >> i ;

    cout<< "Enter the Ending  postion \n";
    cin >> j ;

    iRet  = ToggleRange(iValue  , i , j);

    cout<< "Updated no is :"<< iRet <<"\n";

    return 0;

}
// OUTPUT:
// Enter the no 
//            240
// Enter the Starting postion 
//             5
// Enter the Ending  postion 
//            16
// Updated no is :65280