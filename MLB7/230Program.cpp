// accept n no from user and return the addition of that n nos  
// by using FOR LOOP

#include<iostream>
using namespace std;


int SumI(int Arr[],  int iSize)         // <------- sample
{
     int iSum = 0 , i = 0;

       for(i = 0;   i < iSize;    i++)    // using for loop
        {
            iSum = iSum + Arr[i];

        }
        return iSum;

}


int main()
{
    int iLength = 0 , i = 0 , iRet = 0;
    int *p  = NULL;

    cout<<"Enter the no of element: \n";
    cin>>iLength ;

   
    p = new int[iLength];      // -->  [] it is like a malloc memory allocation

    cout<<" Enter the elements \n";

    for(i = 0 ;    i < iLength ;    i++)
    {
          cin >> p[i];
    }
    iRet = SumI(p , iLength);
    cout<<"Addition is : "<<iRet<<"\n";

     delete []p;      //<------- free karnya sathi

    return 0;
}

/*
Enter the no of element: 
5 
 Enter the elements 
10
20
30
40
50
Addition is : 150
   */