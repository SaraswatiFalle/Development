// Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.
// Input : N : 6
//         NO: 66
// Elements :85 66 3 66 93 88
// Output : 1st index

// Input : N : 6
//         NO: 12
// Elements :85 11 3 15 11 111
// Output : -1   -1means its  not there

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