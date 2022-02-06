#include<iostream>
using namespace std;

typedef  unsigned int UINT;


UINT ToggleRange(UINT iNo, int iStart, int iEnd)    //Uint return value is int
{
    UINT iMask1 = 0xFFFFFFFF  ,iMask2 = 0xFFFFFFFF  , iMask = 0;
    UINT iResult = 0;

    iMask1  = iMask1  << (iStart - 1);
    iMask2  = iMask2  >> (32 - iEnd);
    iMask   =  iMask1 & iMask2;
    iResult = iNo ^ iMask;
    return iResult;
}   

     // iStart = 5
     //End    = 16
    // imask is 32 bits =  1111    0000     0000   0000    0   0 0 0     0000    0 0 0   0      1111
                  //    =  0000    0000     0000   0000    1   1 1 1     1111    1 1 1   1       0000
                 //                                        16th pos                      5th pos
                 //iMask1 = 0xFFFFFFFF;
                //             1111     1111       1111      1111       1111      1111    1111    1111
                 //iMask2 = 0xFFFFFFFF;


              //  iMask1  = iMask1 << (iStart - 1 );                                       
             //             1111     1111       1111      1111       1111      1111    1111    0000  <----SHIFT kala RIGHT LA tar Left LA
 //                                                                                                        1111
            //  iMask2  = iMask2 >> (iStart - 1 );                                       
             //             1111     1111       1111      1111       1111      1111    1111    0000 <----SHIFT kala LEFT LA tar Right LA
 //                                                                                                         0000           
                                                                                                        

int main()
{
      UINT iValue = 0 , iRet = 0 , i , j;                           //i positon

     cout<<"Enter number\n";
     cin>>iValue;

     cout<<"Enter  Starting postion :\n";
     cin>>i;
     cout<<"Enter Ending postion: \n";
     cin>>j;

     iRet = ToggleRange(iValue , i , j);

     cout<< "Updated number  is:  "<<iRet<<"\n";


    return 0;
}