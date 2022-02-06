// 1.Write a program which checks whether 15th bit is On or OFF.

//           |  0000    0000      0000       0000      0100     0000      0000      0000
//           |
//           |
// iMask  :  |   0        0         0        0         4        0           0         0

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit (UINT iNo)
{
       UINT iMask   =   0x00004000;
       UINT iResult =   0;
       iResult      =   iNo  &  iMask;

       if(iResult   ==  iMask)
       {
             return  true;
       }
       else
       {
            return false; 
       }

}
int main()
{
         UINT  iValue  =  0;
         bool  bRet    =  false;

         printf("Enter the no: \n");
         scanf("%d",&iValue);

         bRet = CheckBit(iValue);
         if(bRet  ==  true)
         {
                printf("15th  bit is ON \n");
         }
         else
         {
              printf("15th  bit  is OFF \n");
         }

          return 0;

}
//  OUTPUT:
//  g++ 27Assig1.cpp  -o Myexe
// ./Myexe
// Enter the no: 
//        16384
// 15th  bit is ON
//---------------------------------------------------
//  g++ 27Assig1.cpp  -o Myexe
//  ./Myexe
//  Enter the no: 
//             24
//  15th  bit  is OFF