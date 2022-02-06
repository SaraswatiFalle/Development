// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// Input   : A
// Output  : Decimal 65
// Octal       0101
// Hexadecimal 0X41
#include<stdio.h>
void ChkSpecial(char cValue1)
{

    if( (cValue1 >= 'A'  &&   cValue1 <= 'Z')   ||   (cValue1 >= 'a'      &&    cValue1 <='z' ) )
    {
        printf("Decimal  **********  Octal ***********  Hexadecimal\n");
        printf(" DECIMAL : %d\nOctal : %o\nHexadecimal : %x\n", cValue1,cValue1,cValue1);
    }




}
int main()
{
    char cValue ='\0';
    //bool cRet = false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    ChkSpecial (cValue);
    
    return 0;

}