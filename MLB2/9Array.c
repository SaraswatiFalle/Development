//Return the Max - Min

#include<stdio.h>
#include<stdlib.h>

int Difference(int Brr[], int iSize)
{    
    int iCnt = 0;
    int iMax = Brr[0];
    int iMin = Brr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Brr[iCnt] < iMin)
        {
             iMax = Brr[iCnt];
        }
        if (Brr[iCnt] > iMax )
        {
            iMin = Brr[iCnt];
        }

     }
     
       return iMax - iMin;
}

int main()
{
     int *Arr = NULL;
     int iRet = 0;
     int iCnt =0,iLength = 0;
    
     printf("Enter number of elements\n");
     scanf("%d",&iLength);
    

     Arr = (int *) malloc (sizeof(int) * iLength);
    

     printf("Enter elements\n");
     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
         scanf("%d",&Arr[iCnt]);
     }

     iRet = Difference(Arr,iLength);   // Addition(200);
     printf("Difference is : %d\n",iRet);
    
     free(Arr);
     return 0;
}



