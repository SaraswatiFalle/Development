//4. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.
//Input  : Demo.txt ‘M’
//Output : Frequency of M is 7
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
          int fd = 0, i = 0 , iRet = 0 , iCnt = 0 ;
          char Fname[30];
          char ch = '\0';
          char Buffer[10];

          printf("Enter the file: \n");
          scanf("%s", Fname);
          printf("Enter the letter which you want to search: ");
          scanf("%c", &ch);


          fd = open(Fname , O_RDWR);

          

          if(fd == -1)
          {                                                            //NOT DONE
                   printf("Unable to open the file: \n");
          }
          


         // printf("Enter the letter which you want to search: ");
         // scanf("%c", &ch);

          
           while((iRet = write(fd , Buffer , 10)) != 0)
           {
                  for(i = 0;   i < iRet;    i ++)
                  {

                       if(Buffer[i] == ch ) 

                       {
                           iCnt ++;
                       }

                  }

           }
           close(fd);
           return 0;


           
}