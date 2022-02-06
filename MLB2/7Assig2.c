// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
//Input : 5.3 9.78
//Output : 51.834

#include<stdio.h>
float RectangleArea(float , float);

int main()
{
    float  fValue1 = 0.0;
    float  fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter the Width: ");
    scanf("%f",&fValue1);

    printf("Enter the Height: ");
    scanf("%f",&fValue2);


     fResult = RectangleArea(fValue1 , fValue2);
    {
        printf("The Area of RECTANGLE is : %f\n", fResult);
    }
    return 0;
}
float RectangleArea(float fWidth, float fHeight)
{ 
    float Area = 0.0;
    //float PI = 3.14 ;
    //float iValue = 0.0;
    

         Area = fWidth * fHeight;
    
     
     //{
       //   printf("%f\n",Area );
     //}

     return Area;


}