// Accept N numbers from user and return the largest number.
// Input : N : 6
// Elements :85 66 3 66 93 88
// Output : 93

#include<stdio.h>
#include<stdlib.h>

int MaximumNo(int Brr[] , int iSize)
{
    
    int i = 0 ;
   // int iSum = 1; 
    int iMax = Brr[0];

    for (i = 0;      i < iSize;      i++)
    {
            if (Brr[i] > iMax)
            {
               iMax =  Brr[i];
            }
            
     }
     
         return iMax;
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


    iRet = MaximumNo(Arr , iLength );
    {
        printf(" Largest No is: %d\n",iRet);
    }

    free(Arr);
    return 0;

}