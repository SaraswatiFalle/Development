#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


using namespace std;

class  MarvellousFile
{
      public:
            char Fname[30];
            int fd;

            MarvellousFile(char * Name )   // constructer
            {
                strcpy(Fname , Name);
                fd = open(Fname, O_RDWR);
                

            }



};


int main()
{
    return 0;
}
