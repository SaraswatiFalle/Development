#include<stdio.h>
#include<stdlib.h>

int FirstOcc (int Brr[] , int iSize, int iNO)
{
    
    int i = 0 ;
    int bAns = -1;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == iNO)
            {
                 bAns = i;
                 printf(" %d", bAns);
                
            }
            else
            {
                  bAns = -1;
                 printf(" %d", bAns);
                
            }
            
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


     FirstOcc (Arr , iLength , NO);

    free(Arr);
    return 0;

}