#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char c)
{
       if(c >= 'a'   &&    c <= 'z')   //or  if(c >= 97   &&    c <= 122) 
       {
                return true;
       }
       else
       {
                return false;
       }
}

int main()
{
    char ch= '\0';
    bool bRet = false;

    printf("Enter the Character: ");
    scanf("%c",&ch);


    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("It is Small: ");
    }
    else
    {
        printf("Its is not Small: ");
    }
    return 0;


}