#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[10];   //file cha last la lihaycha ahe

    fd = open("LB171.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    
    read(fd,Arr,5);
    printf("Data from file is: \n");

    write(1 ,Arr, 5);
    printf("\n");

    close(fd);

    return 0;
}