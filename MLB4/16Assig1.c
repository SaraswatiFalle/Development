// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// Input : N : 6
// Elements :85 66 3 80 93 88
// Output : 53   (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Brr[] , int iSize)
{
     int iCnt = 0;
     int iSum1 = 0;
     int iSum2 = 0;

     for(iCnt = 0;      iCnt < iSize;     iCnt++ )
     {
              if((Brr[iCnt] % 2 ) ==  0)
              {
                    iSum1 = iSum1 + Brr[iCnt];
              }
              if((Brr[iCnt] % 2)!= 0)
              {
                    iSum2 = iSum2 + Brr[iCnt];
              }
              
     }
     return iSum1 - iSum2;
}
int main()
{
    int *Arr = NULL;
    int iRet = 0,iCnt =0,iLength = 0;
    
    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    
    Arr = (int *) malloc ( sizeof(int)  *  iLength);
    
    
    printf("Enter numbers:\n ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

      iRet = Difference(Arr,iLength);   // Addition(200);
      printf("Difference is : %d\n",iRet);
    
      free(Arr);
      return 0;
}


