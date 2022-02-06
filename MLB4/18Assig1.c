// Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.
// Input : N : 6
//         NO: 66
// Elements :85 66 3 66 93 88
// Output : TRUE

// Input : N : 6
//         NO: 12
// Elements :85 11 3 15 11 111
// Output : FALSE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Check (int Brr[] , int iSize, int iNO)
{
    
    int i = 0 ;
    bool bAns = false;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == iNO)
            {
                 bAns = true;
                 break ;
                
            }
            
    }
    return bAns;
      
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0 , NO = 0;
    bool iRet = 0;


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


    iRet = Check (Arr , iLength , NO);
    if (iRet == true) 
    {
        printf("  TRUE  its present :\n");
    }
    else
    {
         printf("  FALSE  its NOT present :\n");
    }


    free(Arr);
    return 0;

}