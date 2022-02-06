// Accept character from user. If character is small display its corresponding capital character, and if it small then display its
// corresponding capital. In other cases display as it is.
// Input   : Q
// Output  : q
// Input   : m
// Output  : M
// Input   : 4
// Output  : 4
// Input   : %
// Output  : %
#include<stdio.h>
void charToggle( char ch1)
{
      //char ch1 = '\0';

      if(ch1 >= 'A'       &&      ch1 <= 'Z')
      {
                //return ch1 + 32;
                ch1 = ch1 + 32;
               printf("The character CAPITAL to SMALL is: %c\n",ch1);
      }
      else if(ch1 >= 'a'       &&      ch1 <= 'z')
      {
             //return  ch1 - 32;
             ch1 = ch1 - 32;
              printf("The character SMALL to CAPITAL is: %c\n",ch1);
      }
      else
      {
               ch1 =ch1;
               printf("The character is AS it IS: %c\n",ch1);

      }

}
int main()
{
    char ch = '\0';                                                                            // BOTH THE CONDITION ARE  THER 
    //char cRet = '\0';                                                                          WRITE BOTH OF THEM;
    printf("Enter the character: ");                                                //GIVEN IN //////
    scanf("%c",&ch);

    charToggle(ch);
    // cRet = charToggle(ch);
   // {
     //   printf("The character value is : %c\n", cRet);
   // }
    return 0;

}