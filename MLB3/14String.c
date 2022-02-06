#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(char c)
{
       if(c >= '0'   &&    c <= '9')   //or  if(c >= 97   &&    c <= 122) 
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


    bRet = CheckDigits(ch);

    if(bRet == true)
    {
        printf("It is Digit: ");
    }
    else
    {
        printf("Its is not Digit: ");
    }
    return 0;


}