// Accept N numbers from user check whether that numbers contains 11 in it or not.
// Input : N : 6
// Elements :85 66 11 80 93 88
// Output : 11 is present
// Input : N : 6
// Elements :85 66 3 80 93 88
// Output : 11 is absent


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check (int Brr[] , int iSize)
{
    
    bool bAns = false;
    int i = 0 ;

    for (i = 0;      i < iSize;    i++)
    {
            if (Brr[i]  == 11)
            {
                 bAns = true;
                 break;
            }
    }
      return bAns;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i = 0;
    bool iRet = false;


    printf("Enter the Element Length:  ");
    scanf("%d", &iLength);


    Arr = (int *) malloc (sizeof(int) *  iLength);


    printf("Enter the elements :\n");
    for(i = 0;     i < iLength;    i ++)
    {
          scanf("%d",&Arr[i]); 
    }

    iRet = Check (Arr , iLength);
    if (iRet == true)
    {

         printf(" 11  is present\n");
    }
    else
    {
        printf(" 11  is  not  present\n");
    }

    free(Arr);
    return 0;

}