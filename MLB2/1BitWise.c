//BIT WISE   ACCEPT no from user and return it in Binary format
#include<stdio.h>
void  DisplayBinary(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d\t", iDigit);
        iNo = iNo /2;
    }



}
int main()
{
     int iValue = 0;

     printf("Enter the no: ");
     scanf("%d", &iValue);

    DisplayBinary(iValue);


    return 0;


}