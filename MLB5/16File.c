#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0 , iRet = 0;
    char Buffer[10] , fname[30];   //file cha last la lihaycha ahe

    printf("Enter file name\n");
    scanf("%s", fname); 

    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
     ////////
     // 0  From starting postion
     // 1  From current  postion
     // 2   From end of the file

     while((iRet = read(fd,Buffer,10))! = 0 )
     {
         for(i = 0;  i < iRet;  )
     }


    close(fd);

    return 0;
}