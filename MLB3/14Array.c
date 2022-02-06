// travel from last and want last index no which you want to find
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int Arr[], int iSize , int iNo)
{
    int i = 0;
    for (i = iSize-1;   i >= 0;   i--)
    {
        if (Arr [i] == iNo)
        {
            break;
        }

    }
    if(i == -1)
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

    printf(" Enter the elements to search: ");
    scanf("%d", &iValue);

    iRet= LastOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
          printf(" There is no  such no: \n");
    }
    else
    {
           printf("No is there at index : %d ", iRet);
    }

    free(ptr);
    return 0;
}



