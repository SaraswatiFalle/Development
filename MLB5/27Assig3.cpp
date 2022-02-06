// 3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

//           |  0000    1000      0001        0000        0100       0000       0100        0000
//           |
//           |
// iMask  :  |   0        8         1           0          4          0           4          0


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit (UINT  iNo)
{
        UINT iMask    =   0x08104040;
        UINT iResult  =   0;
        iResult       =   iNo   &  iMask;

        if(iResult  ==   iMask)
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
     UINT iValue  =   0;
     bool bRet    =   false;

     printf("Enter the no: \n");
     scanf("%d", &iValue);

     bRet      =  CheckBit(iValue);
     if(bRet  ==  true )
     {
            printf(" 7th Bit  and  15th  Bit  and  21st  Bit , 28thBit  is   ON \n ");
     }
     else
     {
           printf(" 7th Bit  and  15th  Bit  and  21st  Bit , 28thBit  is   OFF \n ");
     }

}

//  Enter the no: 
//     135282752
//  7th Bit  and  15th  Bit  and  21st  Bit , 28thBit  is   ON 
//----------------------------------------------------------------------------------
//  g++ 27Assig3.cpp  -o Myexe
//  ./Myexe
//  Enter the no: 
//      135282688
//  7th Bit  and  15th  Bit  and  21st  Bit , 28thBit  is   OFF