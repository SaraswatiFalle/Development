#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[]= "Hello";   //file cha last la lihaycha ahe

    fd = open("LB171.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    
    write(fd,Arr,5);
    close(fd);
    return 0;
}