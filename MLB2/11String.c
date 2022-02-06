#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
       if(c >= 'A'   &&    c <= 'Z')   //or  if(c >= 65   &&    c <= 90) 
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


    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("It is Capital: ");
    }
    else
    {
        printf("Its is not Capital: ");
    }
    return 0;


}