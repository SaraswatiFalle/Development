// Write a program which accept string from user and copy that characters of that string into another string in reverse order.
// Input  :  “Marvellous Python”
// Output :  “nohtyP suollevraM”

#include<stdio.h>
void   strRevX(char *Start , char *Str2)
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
      
                                           //Not DONE
       
}   
int main()
{
    char Arr[20];
    char Str1[20];
    

    printf("Enter the String: ");
    scanf("%[^'\n']s", Arr);

    //printf("Reverse string is : %s",Arr);

    strRevX(Arr , Str1);
   // printf("%s\n",Str1); 
    printf("Reverse string is : %s \n",Str1);
    

    return 0;

}