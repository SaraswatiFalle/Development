//Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
//Input   : %
//Output  : TRUE
//Input   : d
//Output  : FALSE
#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial (char cValue1)
{

            if ( (cValue1 >= 32    &&    cValue1 <= 47 )  ||  (cValue1 >= 58   &&  cValue1 <= 64 ) )
            {
                 return true;
            }
            else if(cValue1 >= 97      &&     cValue1 <= 122 )
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

    cRet = ChkSpecial (cValue);
    if(cRet == true)
    {
        printf(" TRUE Its Special Character: \n");
    }
    else
    {
        printf(" FALSE  Its Alphabet: \n");
    }

    return 0;

}