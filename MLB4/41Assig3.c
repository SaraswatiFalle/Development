// 3. Write application which accept file name from user and read all data from that file and display contents on screen.
// Input  : Demo.txt
// Output : Display all data of file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0 , iRet = 0;
    char Fname[30];
    char Buffer[1024];

    printf("Enter the file name: \n");
    scanf("%s",Fname);

    fd = open (Fname , O_RDONLY);
     
     if(fd == -1)
     {
         printf("Unable to open file: \n");

     }
     else
     {
         printf("Open file successfully with FD: %d\n", fd);
     }

     printf("Displayed whole data of the file is :\n");

    while((iRet = read(fd , Buffer ,sizeof(Buffer))) != 0)
    {
        write(1 , Buffer , iRet);
    }
    close(fd);
    return 0;

}
