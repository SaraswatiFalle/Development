//2.Write a program which accepts file name from user and count number of small characters from that file.
//Input  : Demo.txt
//Output : Number of small characters are 21
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0 , iCnt = 0 , iRet = 0, i = 0;
    char Fname[20];
    char Buffer[10];

    printf("Enter the file name: \n");
    scanf("%s", Fname);

    fd = open(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open tha file: ");
    }


    while((iRet = read(fd , Buffer , 10)) != 0)
    {
           for( i = 0;   i < iRet;   i++)
          {
                if(Buffer[i] >= 'a'    &&  Buffer[i] <= 'z')
                {
                    iCnt ++;
                }
          }
    }

    printf("Total no Small lettters are: %d\n",iCnt);
    close(fd);
    return 0;
}