// Generaic program supports CPP        proper generic program
#include<iostream>
using namespace std;

// Specific  Function
void Swap( char *p   , char *q)     
{
    char temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;
        
}
// Generic Function
template < class T >             // <-- Syntax   u can use any letter T or ani alphabet
void SwapX ( T *p   , T *q)          // T means template means rikami jagha
{
      T temp ;

    temp  =    *p   ;
    *p    =    *q   ;
    *q    =    temp ;                                                   // if need u can right this program just sample
                                                                        // 220program is right program
}
int main()
{
    char  x = '\0' , y = '\0';

    cout<<"Enter 1st character\n";
    cin>>x;

    cout<<"Enter 2nd character\n";
    cin>>y;

   // Swap(&x , &y); 
    SwapX(&x , &y);         

    cout<<"Value of X becomes: "<<x<<"\n";
    cout<<"Value of Y becomes: "<<y<<"\n";

    return 0;

}
/*



 */