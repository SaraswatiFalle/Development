// Accept N numbers from user and return difference between frequency of even number and odd numbers.
// Input : N : 7
// Elements :85 66 3 80 93 88 90
// Output : 1 (4 -3)

#include<stdio.h>
#include<stdlib.h>

int Frequency (int Brr[] , int iSize)
{
    
    int iCnt1 = 0 , iCnt2 = 0;
    int i = 0 ;

    for (i = 0;      i < iSize;    i++)
    {
            if ((Brr[i] % 2)  == 0)
            {
                 iCnt1 ++;
            }
            else if ((Brr[i] % 2 ) != 0)
            {
                 iCnt2 ++;
            }
    }
    return iCnt1 - iCnt2;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0, iRet = 0;


    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }

    iRet = Frequency(Arr , iLength);
    printf(" The Difference Betn Even no and Odd no are: %d\n", iRet);

    free(Arr);
    return 0;

}