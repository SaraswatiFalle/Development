// take no from user and return the additin of that digits.     by using RECURSSION
#include<iostream>
using namespace std;


int SumI(int iNo)         // <------- sample
{
     int iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo/10;

        }
        return iSum;

}
int SumR(int iNo)         // <----- actual recursion   SumR R means apla recursssion samja R mazhe
{
     static int iSum = 0;   //  <--- imp static to write

        if(iNo != 0)      //  <----  imp convert while to if imp
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo/10;
            SumR(iNo);           //<-----imp calling it self  i.e recurssive call
        }
        return iSum;

}

int main()
{
    int x = 0, iRet = 0;

    cout<<"Enter the no: \n";
    cin>>x;

   // iRet = SumI(x);
    iRet = SumR(x);

    cout<<" Summation of digits are : "<<iRet<<"\n";

    return 0;
}

/*
Enter the no: 
122
 Summation of digits are : 5   */