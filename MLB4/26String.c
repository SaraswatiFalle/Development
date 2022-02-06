//REVERSE string 
#include<stdio.h>
void swap (char *p ,char  *q )
{
       char temp;

       temp = *q;
       *p = *q;
       *q = temp;


}
int main()
{
        char ch1 , ch2; 

        printf("\nEnter the first character: ");
        scanf("%c",&ch1);

        printf("\nEnter the first character: ");
        scanf(" %c",&ch2);

        printf("Before swapping the character are %c %c \n", ch1, ch2);

        swap(&ch1 , &ch2); // swap address(100 , 200)

        printf("AFTER  swapping the character are %c %c \n", ch1, ch2);

        return 0;
        
        

}