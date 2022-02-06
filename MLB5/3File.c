#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
   int   fd = 0 , iRet = 0;
   char  Fname[30];
   char  Data[] ="Marvellous Infosystem";


   printf("Enter the file name:\n");
   scanf("%s", Fname);

   fd = open(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file:\n");
        return -1;
    }
    else
    {
        printf(" Open file successfully with FD: %d\n",fd);
    }

    iRet = write(fd , Data , 22);
    printf("%d bytes gets Successfully written in the file:\n",iRet);
    return 0;

}