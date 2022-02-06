//Return the Minimum no

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Brr[], int iSize)
{    
    int iCnt = 0;
    int iMax = Brr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Brr[iCnt] < iMax)
        {
             iMax = Brr[iCnt];
        }
        
    }
     
       return iMax;
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

    iRet = Maximum(Arr,iLength);   // Addition(200);
    printf("Maximum is : %d\n",iRet);
    
    free(Arr);
    return 0;
}



