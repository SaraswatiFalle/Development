// Generaic program supports CPP        proper generic program
#include<iostream>
using namespace std;

// Specific  Function       
void Swap( char *p   , char *q)            //  <-----   just ek sample tayar kala ahe namka kai karayvaha ahe means swap
{
    char temp ;
             
    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        
}                                                               /// IMPORTANT START KHALUN ahe generaic
// Generic Function                can accpet int , char , float 
template < class T >             // <-- Syntax   u can use any letter T or ani alphabet // tempalte can accept int ,float, char
void SwapX ( T *p   , T *q)          // T means template means rikami jagha
{
      T temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        
}
int main()
{
    char  x = 'A' , y = 'B';
     SwapX(&x , &y);         

    cout<<"Value of X becomes: "<<x<<"\n";
    cout<<"Value of Y becomes: "<<y<<"\n";


    int i = 11 , j = 21;
    SwapX(&i , &j);         

    cout<<"Value of i becomes: "<<i<<"\n";
    cout<<"Value of j becomes: "<<j<<"\n";



      return 0;

}
/*
Value of X becomes: B
Value of Y becomes: A
Value of X becomes: 21
Value of Y becomes: 11


 */