// Accept Character from user and check whether it is digit or not(0-9).
// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE
#include<stdio.h>
#include<stdbool.h>

bool ChkDigit (char cValue1)
{

            if (cValue1 >= '0'    &&    cValue1 <= '9') 
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
    char cValue ='\0';
    bool cRet = false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    cRet = ChkDigit (cValue);
    if(cRet == true)
    {
        printf("Its a Digit TRUE: \n");
    }
    else
    {
        printf("It is not Digit FALSE: \n");
    }

    return 0;

}