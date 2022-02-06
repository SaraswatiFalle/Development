// using Recurssion     take no from user and displY HELLO WORLD    by using RECURSSION
#include<iostream>
using namespace std;


void DisplayI( int iNo)            // <----- just sample DisplayI
{
        int iCnt = 1;

        while(iCnt <= iNo )
        {
              cout<<"Hello  World\n";
              iCnt ++;
        }


}
void DisplayR(int iNo)          
{
        static int iCnt = 1;      

        if(iCnt <= iNo )            
        {
              cout<<"Hello  World\n";
              iCnt ++;
              DisplayR(iNo);                

        }

}


int main()
{
     int i = 5;

    // DisplayI(i);  
     DisplayR(i);           

     return 0;

}
/*
Hello  World
Hello  World
Hello  World
Hello  World
Hello  World  */