// SET 2:
// Q 1 : largest even no

#include<stdio.h>
#include<stdlib.h>

int LargestEven(int Brr[], int iSize)
{    
    int iCnt = 0;
    int iMax = Brr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Brr[iCnt] % 2) == 0)
        {
               if (Brr[iCnt] > iMax)
                {
                       iMax = Brr[iCnt];
                }
        }
                       
    }
     
       return iMax;
}
    int main()
{
    int *Arr = NULL;
    int iRet = 0;
    int iCnt = 0,iLength = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    

    Arr = (int *) malloc ( sizeof(int)  *  iLength);
    

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = LargestEven(Arr,iLength);  

    printf("The Largest  Even no  is : %d\n",iRet);
    
    free(Arr);
    return 0;
}



