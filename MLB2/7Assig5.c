//Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
// Input : 5
// Output : 0.464515

// Input : 7
// Output : 0.650321

#include<stdio.h>
double  SQUAREtoMETER(float);

int main()
{
    float  iValue = 0;
    double iResult = 0;

    printf("Enter the Square: ");
    scanf("%f",&iValue);


     iResult = SQUAREtoMETER( iValue);
    {
        printf(" Meter is : %f\n", iResult);
    }
    return 0;
}
double SQUAREtoMETER(float Square)
{ 
    float METER = 0;

         METER = Square * 0.0929;
    
     

     return METER;


}