// accept n no from user and return the addition of that n nos ..........using Recurssion   
// by using WHILE LOOP

#include<iostream>
using namespace std;


int SumI(int Arr[],  int iSize)         // <------- sample
{
     int iSum = 0;


       int  i = 0;
       while( i < iSize) 
       {
              iSum = iSum + Arr[i];   
              i++;
       }       
       return iSum;                 
        

      
}
int SumR(int Arr[],  int iSize)         // using Recurssion
{
     static int iSum = 0 , i = 0;

       if( i < iSize) 
       {
              iSum = iSum + Arr[i];   
              i++;
              SumR(Arr , iSum);
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
    //iRet = SumI(p , iLength);
    
    iRet = SumR(p , iLength);
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