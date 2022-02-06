// Write a program which accept string from user reverse that string in place.
// Input : “abcd”
// Output : “dcba”
//  Input : “abba”
// Output : “abba”
#include<stdio.h>
void   strRevX(char *Start)
{
    char  *end  = Start;
    char temp; 

      while (*end != '\0')
      {
          end ++;
      }
      end --;

      while(Start < end)
      {
          temp    =  *Start;
          *Start  =  *end ;
          *end    =  temp ;
      
           Start ++;
           end --;
      }
     

       
}   
int main()
{
    char Arr[20];

    printf("Enter the String: ");
    scanf("%[^'\n']s", Arr);

    //printf("Reverse string is : %s",Arr);

    strRevX(Arr);
    printf("Reverse string is : %s \n",Arr);

    return 0;

}