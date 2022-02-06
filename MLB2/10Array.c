// check wther no having 11 in array or  not

bool CheckNumber(int Arr[], int iSize)
{
    int i = 0;
    for (i = 0;   i< iSize;   i++)
    {
        if (Arr [i] == 11)
        {
            return true;
        }

    }
    return false;
}

int main()
{
    int *ptr = NULL;
    bool bRet = false;
    int i =0,iLength = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    
    ptr = (int *) malloc ( sizeof(int)  *  iLength);
    
    printf("Enter numbers\n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }


    bRet= CheckNumber(ptr, iLength);
    if(bRet == true)
    {
          printf(" Number is there: ");
    }
    else
    {
           printf(" Number is there: ");
    }

    free(ptr);
    return 0;
}



