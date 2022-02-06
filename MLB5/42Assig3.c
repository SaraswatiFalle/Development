//3. Write a program which accepts file name from user and count number of white spaces from that file.
// Input : Demo.txt
// Output : Number of white spaces are 13

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
        int  fd = 0, iCnt = 0 , i = 0 , iRet= 0;
        char Buffer[10];
        char Fname[30];

        printf("Enter the file  name :\n");
        scanf("%s",Fname);

        fd = open(Fname , O_RDWR);

         if(fd == -1)
        {
              printf("Unable to open the file: ");
        }

        while( (iRet = read(fd , Buffer , 10)) != 0)
        {
               for(i = 0;     i < iRet;   i++)
               {
                     if(Buffer[i] == ' ')
                     {
                         iCnt ++;
                     }
               }
        }
        printf("Total white spaces are: %d\n",iCnt);
        close(fd);
        return 0;
}