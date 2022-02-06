// Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.
// Input : N : 6
//         NO: 66
// Elements :85 66 3 66 93 88
// Output : 3

// Input : N : 6
//         NO: 93
// Elements :85 66 3 66 93 88
// Output : 4

// Input : N : 6
//          NO: 12
// Elements :85 11 3 15 11 111
// Output : -1

#include<stdio.h>
#include<stdlib.h>

int LastOcc (int Brr[] , int iSize, int iNO)
{
    
    int i = 0 ;
    //bool bAns = false;

    for (i = iSize -1;      i >= 0;    i--)
    {
            if (Brr[i]  == iNO)
            {
                 break ;
            }
     }
     if( i == -1)
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


    iRet = LastOcc (Arr , iLength , NO);
    if(iRet == -1)
    {
        printf("  There is  NO Such no in  INDEX : %d\n", iRet);
    }
    else
    {
         printf("  LAST occ of INDEX NO is : %d\n" ,iRet);
    }


    free(Arr);
    return 0;

}