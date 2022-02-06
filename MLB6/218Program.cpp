// Generaic program supports CPP        using char  in swap
#include<iostream>
using namespace std;


void Swap( char *p   , char *q)     
{
    char temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        
}
int main()
{
    char  x = '\0' , y = '\0';

    cout<<"Enter 1st character\n";
    cin>>x;

    cout<<"Enter 2nd character\n";
    cin>>y;

    Swap(&x , &y);         // tacha address jail 100 , 200

    cout<<"Value of X becomes: "<<x<<"\n";
    cout<<"Value of Y becomes: "<<y<<"\n";






    return 0;

}
/*
Enter 1st character
A
Enter 2nd character
Z
Value of X becomes: Z
Value of Y becomes: A  */