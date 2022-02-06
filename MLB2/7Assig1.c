//Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
//Output : 88.2026

//Input : 10.4
//Output : 339.6224

#include<stdio.h>
double CircleArea(float);

int main()
{
    float  fRadius = 0;
    double fResult = 0;

    printf("Enter the Radius: ");
    scanf("%f",&fRadius);

     fResult = CircleArea(fRadius);
    {
        printf("The Area of CIRCLE is : %f\n", fResult);
    }
    return 0;
}
double CircleArea(float iValue)
{ 
    double Area = 0;
    float PI = 3.14 ;
    //float iValue = 0.0;
    

         Area = PI * iValue * iValue ;
    
     
     //{
       //   printf("%f\n",Area );
     //}

     return Area;


}