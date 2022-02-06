// Accept N numbers from user and return the difference between largest and smallest number.
// Input : N : 6
// Elements :85 66 3 66 93 88
// Output : 90 (93 -3)
#include<stdio.h>
#include<stdlib.h>

int Difference( int Brr[] , int iSize )
{
    int i = 0 ;
    int iMax = Brr[0];
    int iMin = Brr[0];

     for(i = 0;   i < iSize;   i++)
     {
             if(Brr[i] > iMax)
             {
                  iMax = Brr[i];
             
            }
             if(Brr[i] < iMin)
            {
                 iMin = Brr[i];
            }
     }   
     return iMax - iMin;
}

int main()
{
    int *Arr = NULL;
    int i = 0;
    int iRet = 0, iLength = 0;

    printf("Enter the length of an elements: ");
    scanf("%d", &iLength);

    Arr = (int *)   malloc (sizeof(int)   *   iLength);


    printf(" Enter the elements:\n");
    for(i = 0;   i < iLength ;   i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = Difference (Arr , iLength);
    {
        printf("Difference between MAX and MIN is: %d\n", iRet);
    }
    
    free(Arr);
    return 0;

}