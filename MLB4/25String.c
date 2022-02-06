// Accept String  and check it is PALLANDROME or not
#include<stdio.h>
#include<stdbool.h>
bool ChkPallindrome(char *str )
{
       char *start = NULL;     //default null
       char *end = NULL;  
       start = str;
       end = str;

       while (*end != '\0')
       {
           end ++;
       }     
       end --;
      while (start < end)
      {
          if(*start != *end)
          {
              break ;
          }
          start ++;
          end --;
      } 
      if(start < end)
      {
          return false;
      }
      else
      {
          return true;
      }


}
int main()
{
        char Arr [20]; 
        bool bRet = false ;

        printf("\nEnter the string : ");
        scanf("%[^'\n']s",Arr);


        bRet = ChkPallindrome(Arr);
        if(bRet == true)
        {
               printf("TRUE its PALLINDROME\n");   
        }
        else
        {
              printf("FALSE its Not PALLINDROME\n");
        }

         return 0;

}