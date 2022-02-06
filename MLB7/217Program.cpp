//      using float  in swap
#include<iostream>
using namespace std;


void Swap( float *p   , float *q)     
{
    float temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        
}
int main()
{
    float  x = 0 , y = 0;

    cout<<"Enter 1st number\n";
    cin>>x;

    cout<<"Enter 2nd number\n";
    cin>>y;

    Swap(&x , &y);         // tacha address jail 100 , 200

    cout<<"Value of X becomes: "<<x<<"\n";
    cout<<"Value of Y becomes: "<<y<<"\n";






    return 0;

}
/*
Enter 1st number
11.0
Enter 2nd number
21.0
Value of X becomes: 21
Value of Y becomes: 11  */