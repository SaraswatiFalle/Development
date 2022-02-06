//
#include<stdio.h>
void Display(char Brr[])
{
    printf("Name is %s \n", Brr);
}

int main()
{
    char Arr[50];  ///string

    printf("Enter ur name: ");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}