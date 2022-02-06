// finsd index no
// check wther no having 11 in array or  not

#include<stdio.h>
#include<stdlib.h>
int FirstOccurance(int Arr[], int iSize , int iNo)
{
    int i = 0;
    for (i = 0;   i< iSize;   i++)
    {
        if (Arr [i] == iNo)
        {
            break;
        }

    }
    if(i == iSize)
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
    int *ptr = NULL;
    int i =0,iLength = 0 , iValue = 0, iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    
    ptr = (int *) malloc ( sizeof(int)  *  iLength);
    
    printf("Enter elements\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf(" Enter the elements tobsearch: ");
    scanf("%d", &iValue);

    iRet= FirstOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
          printf(" There is no  such no: ");
    }
    else
    {
           printf("No is there at index : %d ", iRet);
    }

    free(ptr);
    return 0;
}



