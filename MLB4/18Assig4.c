//Accept N numbers from user and accept Range, Display all elements from that range
// Input : N : 6
// Start: 60
// End : 90
// Elements :85 66 3 76 93 88
// Output : 66 76 88

// Input : N : 6
// Start: 30
// End : 50
// Elements :85 66 3 76 93 88
// Output :
#include<stdio.h>
#include<stdlib.h>

void Range(int Brr[] , int iSize, int iNO3 , int iNO4)
{
    
    int i = 0 ;
    //bool bAns = false;

    for (i = 0;      i < iSize;      i++)
    {
            if (Brr[i] > iNO3     &&     Brr[i] < iNO4)
            {
                printf(" %d\t ",Brr[i]);
            }
            
     }
     printf("\n");

     
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0 , NO1 = 0 ,NO2 = 0;
    

    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");  
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }

    printf("Enter the STARTING POINT: ");        /// Accept the range
    scanf("%d", &NO1);
    printf("Enter the ENDING POINT: ");        /// Accept the range
    scanf("%d", &NO2);


    Range (Arr , iLength , NO1 , NO2);
    

    free(Arr);
    return 0;

}