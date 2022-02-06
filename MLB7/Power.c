//Accept no from user and display table
//INput: 

#include<stdio.h>
int Power(int, int); /// 2n number ghatle manhun

int main()
{
    int iValue1= 0 ;
    int iValue2 = 0;
    int iRet = 0;

    printf(" Enter the 1st no: ");
    scanf("%d",&iValue1);

    printf(" Enter the 2nd no: ");
    scanf("%d",&iValue2);
    
    iRet = Power(iValue1 , iValue2);
    {
        printf(" Return value is: %d\n",iRet);
    }

    return 0;
}
// power (2, 4)
int Power(int  x , int y)
{
     int iCnt = 0;
     int iMult = 1;
     
    if(x < 0)
     {
         x = -x;
     }
     if (y < 0)
     {
         y = -y;
     }

     for (iCnt = 1;  iCnt <= y;  iCnt ++)
     {
         iMult = iMult * x;

     }
    return iMult;
}