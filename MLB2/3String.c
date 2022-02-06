//
#include<stdio.h>
int main()
{
    char Arr[50];  ///string

    printf("Enter ur name: ");
    scanf("%[^'\n']s",Arr);

    printf(" ur Entered name is: %s\n",Arr);
    return 0;
}