//5. Write a program which accepts file name and one count from user and read that number of characters from starting position.
//Input : Demo.txt 12
//Output : Display first 12 characters from Demo.txt
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd =0 , iRet = 0; 
    char Fname[30];
   // char Buffer[10];
    char Data[7];

    printf("Entre the file: \n");
    scanf("%s", Fname);

    fd = open(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file: \n");
        return -1;                                       //NOT DONE
    }
    else
    {
        printf("Opend file Succesfully in FD: %d\n",fd);
    }
     iRet = read(fd , Data , 7 );
     printf("%d bytes read from the file is: \n", iRet);
     printf(" Data from file is: %s\n", Data);

     write(1 , Data , iRet);
     return 0;
}