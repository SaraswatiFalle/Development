//Accept no and as well as postion of the no and check wether that bit at that postion is ON or OFF.
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT  iNo, UINT iPos)
{
   UINT iMask = 0X00000001;
   UINT iResult = 0 ;

   iMask= iMask << (iPos - 1);
   iResult = iNo & iMask;

   if(iResult == iMask)
   {
       return true;
   }
   else
   {
       return false;
   }

}

int main()
{
     UINT iValue = 0 , iBit= 0;
     bool bRet = false;

     printf("Enter the no: ");
     scanf("%d", &iValue);

     printf("Enter the postion: ");
     scanf("%d", &iBit);

     bRet = CheckBit (iValue , iBit);

     if (bRet == true)
     {
        printf("BIT  is ON\n");
     } 
     else
     {
         printf(" BIT are OFF\n");
     }

     return 0;
}
