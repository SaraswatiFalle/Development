//    using INT in swap
// simple program SWAP 
#include<iostream>
using namespace std;


void Swap( int *p   , int *q)     // accept add of int      // p madhe  100 madla 11 yel , q = 200 madla 21 yel
{
    int temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        




}
int main()
{
    int  x = 0 , y = 0;

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
11
Enter 2nd number
21
Value of X becomes: 21
Value of Y becomes: 11   */