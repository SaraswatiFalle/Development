// Accept N numbers from user and display all such numbers which contains 3 digits in it.
// Input : N : 6
// Elements :8225  665  3  76  953  858
// Output : 665  953  858

#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

int FirstOcc (int Brr[] , int iSize, int iNO)
{
    
    int i = 0 ;
    //bool bAns = false;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == iNO)
            {
                 break ;
            }
     }
     if( i == iSize)
     {
        return -1;
     }
     else
     {
         return i;
     }

}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0 , NO = 0;
    int iRet = 0;


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


    iRet = FirstOcc (Arr , iLength , NO);
    if(iRet == -1)
    {
        printf(" There is NO such no in INDEX : %d\n", iRet);
    }
    else
    {
         printf("  FIRST occ of INDEX NO is : %d\n" ,iRet);
    }


    free(Arr);
    return 0;

}