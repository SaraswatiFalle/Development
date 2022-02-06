//AVERAGE
//input: N: 4
           // 5 4 3 6
//output: 4.5

#include<stdio.h>
#include<stdlib.h>

float Average(int Brr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    float fResult = 0.0f;   //f means it will come in float only id not write f then it will consider as double
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum +Brr[iCnt];
        
    }
    fResult = (float)iSum / (float)iSize;
    return fResult;
}

int main()
{
    int *Arr = NULL;
    float fRet = 0.0f;
    int iCnt =0,iLength = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    

    Arr = (int *) malloc ( sizeof(int)  *  iLength);
    

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }


   /* printf("Enter elements  are\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d  ",Arr[iCnt]);
    }
    printf("\n")*/

    fRet = Average(Arr,iLength);   // Addition(200);
    printf("Average is : %f\n",fRet);
    
    free(Arr);
    return 0;
}



