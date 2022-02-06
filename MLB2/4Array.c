//Addition of  odd no
#include<stdio.h>
#include<stdlib.h>

int AddOdd(int Brr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Brr[iCnt] % 2) != 0)
         
        {

              iSum = iSum +Brr[iCnt];
        }
        
    }
     
       return iSum;
}

int main()
{
    int *Arr = NULL;
    int iRet = 0;
    int iCnt =0,iLength = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    

    Arr = (int *) malloc ( sizeof(int)  *  iLength);
    

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = AddOdd(Arr,iLength);   // Addition(200);
    printf("Addition of Odd is : %d\n",iRet);
    
    free(Arr);
    return 0;
}



