//Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//Input : 10
//Output : -12.2222       (10 - 32) * (5/9)

//Input : 34
//Output : 1.11111       (34 - 32) * (5/9)
#include<stdio.h>
double FhtoCs(float );

int main()
{
    float fValue1 = 0;
    double fResult = 0;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fValue1);


     fResult = FhtoCs(fValue1);
    {
        printf(" The value into celsius : %f\n", fResult);
    }
    return 0;
}
double FhtoCs(float Fahrenheit)
{ 
    float celsius = 0;
    

         celsius = (Fahrenheit - 32) * 5/9;

        return celsius;

}