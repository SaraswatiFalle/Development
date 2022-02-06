// Accept N numbers from user and display all such elements which are even and divisible by 5.
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 80


#include<stdio.h>
#include<stdlib.h>
void Display(int Brr[], int iSize)
{
     int iCnt = 0;

     for(iCnt = 0;   iCnt < iSize;    iCnt++)
     {
         if(Brr[iCnt] % 5 == 0  &&   Brr[iCnt]  % 2 == 0 )
         {
              printf("    %d  ", Brr[iCnt]);
         }
     }
}

int main()
{
       int *Arr = NULL;
       int iLength = 0,  iCnt =0;

       printf("Enter the no of elements: ");
       scanf("%d", &iLength);


       Arr = (int *) malloc (sizeof(int) *  iLength);


       printf("Enter the elements:\n");
       for(iCnt = 0;   iCnt < iLength;    iCnt++)
       {
            scanf("%d", &Arr[iCnt]);
       }

        Display(Arr , iLength);
        free(Arr);

        return 0;

   

}