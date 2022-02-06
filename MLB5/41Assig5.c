//5. Write application which accept file name from user and one string from user. Write that string at the end of file.
// Input : Demo.txt
//         Hello World
// Output : Write Hello World at the end of Demo.txt file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[] = "Hello";

    fd = open("LB2021.txt", O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to file \n");
    }
    else
    {
        printf("Open file Successfully Fd: %d\n", fd);
    }

    write (fd , Arr , 5);
    close(fd);
    return 0;
}
//output:  MarvellousHello

    