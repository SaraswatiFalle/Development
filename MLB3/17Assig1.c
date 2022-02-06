// Accept N numbers from user and return frequency of even numbers.
// Input : N :   6
// Elements :   85 66 3 80 93 88
//Output :    3

#include<stdio.h>
#include<stdlib.h>

int CountEven (int Brr[] , int iSize)
{

    int iCnt = 0;
    int i = 0 ;

    for (i = 0;      i < iSize;    i++)
    {
            if ((Brr[i] % 2)  == 0)
            {
                 iCnt ++;
            }
    }
    return iCnt;

}
int main()
{
     int *Arr = NULL;
     int iLength = 0 , i = 0 , iRet = 0;


     printf("Enter the element  Length:  ");
     scanf("%d",&iLength);


     //Arr = (int*) malloc (sizeof(int)   *   iLength);
      Arr = (int *) malloc ( sizeof(int)  *  iLength);


     printf("Enter the elements:\n");
     for(i = 0;       i < iLength;    i++)
     {
              scanf("%d",&Arr[i]);
     }

     iRet = CountEven(Arr , iLength);
     printf("The  Count of EVEN no are: %d\n", iRet);

     free(Arr);
     return 0;

}