// using Recurssion
#include<iostream>
using namespace std;


void DisplayI()
{
        int iCnt = 1;

        while(iCnt <= 4 )
        {
              cout<<"Hello  World\n";
              iCnt ++;
        }


}
void DisplayR()           //R for recurssion   calling function -void display from same funtion itself -DisplayR
{
        static int iCnt = 1;      // static ne value preserve rahate like 1 to 2 to 3 to 4 as jata pudha

        if(iCnt <= 4 )            //  we dont have to use any loops loike while do while etc
        {
              cout<<"Hello  World\n";
              iCnt ++;
              DisplayR();                //  <---- calling inside the function is recurssion

        }

}


int main()
{
      int i = 0;

     DisplayR();            //  <----varcha void displayR itration kala ki toh lastly main la ya means etha DisplayR 

     return 0;

}
/*
Hello  World
Hello  World
Hello  World
Hello  World  */