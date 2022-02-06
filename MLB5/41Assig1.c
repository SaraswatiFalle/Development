// 1. Write application which accept file name from user and open that file in read mode.
//Input  : Demo.txt
//Output : File opened successfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name\n");
    scanf("%s", Fname);

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
          printf("Unable to open the file: \n");
    }
    else
    {
          printf("File Opened Successfully with FD :%d\n",fd);
    }
    return 0;
}
