// Accept Character from user and check whether it is alphabet or not (A-Z a-z).
// Input : F
// Output : TRUE
// Input : &
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch1)
{
    
    //char c ='\0';
    //bool bAns = false;


            if (  (ch1 >='A'    &&    ch1 <= 'Z')  ||  ( ch1 >='a'    &&    ch1 <= 'z') )
              
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
    char ch ='\0';
    bool cRet = false;

    printf("Enter the character: ");
    scanf("%c",&ch);

    cRet = ChkAlpha(ch);
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