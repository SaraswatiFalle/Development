//REVERSE THE STRING;
#include<stdio.h>
void strrevX(char *start) 
{
     char *end = start;
     char temp ;

     while (*end != '\0')
     {
         end ++;
     }
     end --;

     while(start < end)
     {
         temp = *start;
         *start = *end;
         *end = temp;

         start ++;
         end --;
     }


}
int main()
{
    char Arr[30];

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

     strrevX(Arr);    //strrev(100)

     printf("Reverse String is: %s\n", Arr);

     return 0;
}