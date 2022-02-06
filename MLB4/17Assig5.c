 // Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
// Input : N : 6
//         NO: 66
// Elements :85 66 3 66 93 88
// Output : 2

// Input : N : 6
//         NO: 12
// Elements :85 11 3 15 11 111
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency (int Brr[] , int iSize, int iNO)
{
    
    int i = 0 , iCnt = 0;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == iNO)
            {
                 iCnt ++;
            }
    }
      return iCnt;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0 , iRet = 0 , NO = 0;


    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");  
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }

    printf("Enter the element which you want to search: ");        /// Accept that no which you want to search
    scanf("%d", &NO);


    iRet = Frequency(Arr , iLength , NO);
    {
        printf("The frequency of the no which u have SEARCHED is : %d\n",iRet);
    }


    free(Arr);
    return 0;

}