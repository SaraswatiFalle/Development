//Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small
//then print all the characters in reverse order till a. In other cases
//return directly.
//Input   : Q
//Output  : Q R S T U V W X Y Z
//Input   : m
//Output  : m l k j i h g f e d c b a
//Input   : 8
//Output  :

#include<stdio.h>
void Display( char ch1)
{
    char i = '\0';
    for(i = ch1;       i <='Z';     i++)
    {
           // if( ch1 >='A'    &&     ch1 <= 'Z')
             {
                   printf(" %c\t",i);
             }
    }
    for(i = ch1;       i >= 'a';        i-- )
    {
       printf(" %c\t", i);

    }

      // while(ch1 <='Z')
      // {
                       
        //              {        
                           
                         //  printf("The character UP TILL LAST is: %c\n",ch1);                     // TWO WAYS OF DOING222 WITH FOR LOOP 
                           //ch1 ++;                                                                //    AND WHILE LOOP
                     // }
     //  }

     
}
int main()
{
      char ch = '\0';                                                                                                          
      printf("Enter the character: ");                                                
      scanf("%c",&ch);

      Display(ch);
    
       return 0;

}