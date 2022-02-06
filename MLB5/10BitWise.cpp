#include<iostream>
using namespace std;
typedef  unsigned int UINT;
/*
     op1     op2     &     |     ^(xor)     // bit start from 1
     1        0      0     1      1         // array start from 0
     0        1      0     1      1
     1        1      1     1      0
     0        0      0     0      0

//iPos    5 ani 6  
// iNO     0     1    0     1    0      0     0      0             // 5th and 6th are 1
   
 //input   0     1    1     0     0     1     0      0  
// iMask   0     1    0     1     0     0     0      0    ^
----------------------------------------------------------
//output   0     0    1     1     0     1     0      0
*/
UINT ToogleBit(UINT iNo, int iPos1 , int iPos2)    //Uint return value is int
{
    int iMask1 = 0x00000001   , iMask2 = 0x00000001   ,    iMask =0 ;
    int iResult = 0 ;                                               //iresult to store value

    
    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;                                            //toogle we  use ^

    return iResult;


}
int main()
{
      int iValue = 0 , iRet = 0 , i = 0 , j = 0;                           //i positon

     cout<<"Enter number\n";
     cin>>iValue;

     cout<<"Enter the 1st position of bit\n";
     cin >> i;
     cout<<"Enter the 2nd position of bit\n";
     cin >> j;


     iRet = ToogleBit(iValue , i , j);

     cout<< "Updated number  is:  "<<iRet<<"\n";


    return 0;
    
}