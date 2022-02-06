// Accept N numbers from user and return product of all odd elements.
// Input : N : 6
// Elements :15 66 3 70 10 88
// Output : 45

// Input : N : 6
// Elements :44 66 72 70 10 88
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Brr[] , int iSize)
{
    
    int i = 0 ;
    int iSum = 1; 

    for (i = 0;      i < iSize;      i++)
    {
            if ((Brr[i] % 2) != 0)
            {
               iSum = iSum * Brr[i];
            }
            
     }
     
         return iSum;
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


    iRet = OddProduct (Arr , iLength );
    if(iRet == 1)
    {
        printf("There are no ODD nos: %d\n",iRet);
    }
    else
    {
         printf("Product of all Odd nos are: %d\n", iRet);
    }

    free(Arr);
    return 0;

}