//
#include<stdio.h>
typedef unsigned int UINT;

UINT  strlenX(char *str)  //strlen
{
    int iCnt= 0;

    if(str == NULL)
       return 0;

    while(*str != '\0')
    {
        iCnt ++;
        str ++;
    }
    return iCnt;

}

int main()
{
    char Arr[20];  ///string
    UINT iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("Length of string is:  %d", iRet);

    
    return 0;
}