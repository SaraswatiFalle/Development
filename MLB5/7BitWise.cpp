#include<iostream>
using namespace std;
typedef  unsigned int UINT;
/*
     op1     op2     &     |     ^(xor)     // bit start from 1
     1        0      0     1      1         // array start from 0
     0        1      0     1      1
     1        1      1     1      0
     0        0      0     0      0


// iNO     0000    0000    1110    0100    1111    0100   1011   1010
// iPos     6   
// Ret     0000    0000    1110    0100     1111   0100   1001   1010
*/
UINT ToogleBit(UINT iNo, int iPos)    //Uint return value is int
{
    int iMask = 0x00000001;
    int iResult = 0 ;                 //iresult to store value
      

    if((iPos < 1) || (iPos > 32))       //filter
    {
        return 0;
    }

    
    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;      //toogle we  use ^

    return iResult;


}
int main()
{
      int iValue = 0 , iRet = 0 , i = 0;   //i positon

     cout<<"Enter number\n";
     cin>>iValue;

     cout<<"Enter the position of bit\n";
     cin >> i;

     iRet = ToogleBit(iValue , i);

     cout<< "Updated number  is:  "<<iRet<<"\n";


    return 0;
}