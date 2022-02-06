#include<iostream>

using namespace std;
class Marvellous
{
       public:
            int Addition(int x, int y)
            {
                int iAns = 0;
                iAns = x + y;
                return iAns; 
            }


};      //<-- ; imp

int main()                
{
    int iNo1 = 0 ,iNo2= 0, iRet = 0;
    Marvellous mobj;       // <-- c++      // Marvellous mobj = new Marvellous(); <---- java

    cout<< "Enter 1st no:\n"; 
    cin>>iNo1;     //scanf("%d", &iNo1)

    cout<< "Enter 2nd no:\n"; 
    cin>>iNo2;

    iRet = mobj.Addition(iNo1 , iNo2);   //<---// object oriented ahe manhun obj . method cha call means(addition)

    cout<< "Addition is : " << iRet <<"\n"; 

                                 

    return 0;
}
