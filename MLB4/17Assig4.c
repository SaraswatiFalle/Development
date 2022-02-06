// Accept N numbers from user and return frequency of 11 form it.
// Input : N : 6
// Elements :85 66 3 15 93 88
// Output : 0
// Input : N : 6
// Elements :85 11 3 15 11 111
// Output : 2
#include<stdio.h>
#include<stdlib.h>

int Frequency (int Brr[] , int iSize)
{
    
    int i = 0 , iCnt = 0;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == 11)
            {
                 iCnt ++;
            }
    }
      return iCnt;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0 , iRet = 0;


    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }


    iRet = Frequency(Arr , iLength);
    {
        printf("The frequency of 11 are : %d\n",iRet);
    }


    free(Arr);
    return 0;

}