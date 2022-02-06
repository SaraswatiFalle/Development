// Write a program which displays ASCII table. Table contains symbol,Decimal, Hexadecimal and Octal representation of every member from
// 0 to 255.
#include<stdio.h>
void DisplayASCII()
{
    int i = 0;
    printf(" ASCII ------------------- TABLE\n ");
    printf("*********************************************************************\n");
    printf("DECIMAL\t  HEXADECIMAL\t  OCTAL\t  CHARACTER\n ");
    printf("*********************************************************************\n");
    for(i = 0;      i <= 127;     i++)
    {
        printf("%d \t %x \t %o \t %c \t ", i,i,i,i);
    }







    
    printf("*********************************************************************\n");

}

int main()
{
     DisplayASCII();
     return 0;
}