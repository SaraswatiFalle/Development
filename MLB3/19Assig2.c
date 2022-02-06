// Accept N numbers from user and return the smallest number.
// Input : N : 6
// Elements :85 66 3 66 93 88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int MinimumNo(int Brr[] , int iSize)
{
    
    int i = 0 ;
   // int iSum = 1; 
    int iMin = Brr[0];

    for (i = 0;      i < iSize;      i++)
    {
            if (Brr[i] < iMin)
            {
               iMin =  Brr[i];
            }
            
     }
     
         return iMin;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0;
    

    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");  
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }


    iRet = MinimumNo(Arr , iLength );
    {
        printf(" Smallest No is: %d\n",iRet);
    }

    free(Arr);
    return 0;

}