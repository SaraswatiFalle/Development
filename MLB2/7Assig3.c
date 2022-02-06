// Write a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter)
//Input : 5
//Output : 5000

//Input : 12
//Output : 12000


#include<stdio.h>
int  KMtoMETER( int );

int main()
{
    int  iValue = 0;
    int iResult = 0;

    printf("Enter the Kilometer: ");
    scanf("%d",&iValue);


     iResult = KMtoMETER( iValue);
    {
        printf(" Meter is : %d\n", iResult);
    }
    return 0;
}
int KMtoMETER(int iKILO)
{ 
    int METER = 0;

         METER = iKILO * 1000;
    
     
     //{
       //   printf("%f\n",Area );
     //}

     return METER;


}