#include<iostream>
using namespace std;

typedef  unsigned int UINT;


UINT ToogleNibble(UINT iNo)    //Uint return value is int
{
    UINT iMask = 0x0000000F   ;
    
    //what is imask is 32 bits =  1111    0000     0000   0000    0000    0000    0000      1111
          //                   =    F      0        0       0       0       0       0        F
          //                   =   0xF000000F  

    UINT iResult = 0 ;                                               //iresult to store valu

    iResult = iNo ^ iMask;                                            //toogle we  use ^

    return iResult;
}
int main()
{
      UINT iValue = 0 , iRet = 0 ;                           //i positon

     cout<<"Enter number\n";
     cin>>iValue;

     iRet = ToogleNibble(iValue);

     cout<< "Updated number  is:  "<<iRet<<"\n";


    return 0;
}