// no  greater than 10   and Less tahn 20
#include<stdio.h>
#include<stdlib.h>

int CountRange(int Brr[], int iSize)
{    
    int iCnt = 0;
    int i = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Brr[iCnt] > 10     &&  Brr [iCnt] < 20)
         
        {

              i++;
        }
        
    }
     
       return i;
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

    iRet = CountRange(Arr,iLength);   // Addition(200);
    printf("Count between 10 to 20 are : %d\n",iRet);
    
    free(Arr);
    return 0;
}



