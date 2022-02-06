// 4. Write application which accept file name from user and display size of file.
// Input : Demo.txt
// Output : File size is 56 bytes
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0 , iRet = 0;
    char Fname[30];
    char Data[] = "MArveLLOUSInfoheLLO";

    printf("Enter the file name : \n");
    scanf("%s", Fname);

    fd = open(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("File is not Open");

    }
    else
    {
         printf("File is open successfully with FD : %d\n",fd);
    }

    iRet = write(fd , Data , 19);
    printf(" File size is %d bytes \n",iRet );
    return 0;
}