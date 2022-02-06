// Accept Character from user and check whether it is capital or not (A-Z).
// Input  :  F
// Output :  TRUE
// Input  :  d
// Output :  FALSE
#include<stdio.h>
#include<stdbool.h>

bool ChkCapital (char ch1)
{

            if (ch1 >= 'A'    &&    ch1 <= 'Z') 
            {
                 return true;
            }
            else if ( ch1 >='a'    &&    ch1 <= 'z')
            {
                return false;
            }
            

}

int main()
{
    char ch ='\0';
    bool cRet = false;

    printf("Enter the character: ");
    scanf("%c",&ch);

    cRet = ChkCapital (ch);
    if(cRet == true)
    {
        printf("It is character TRUE: \n");
    }
    else
    {
        printf("It is not character FALSE: \n");
    }

    return 0;

}