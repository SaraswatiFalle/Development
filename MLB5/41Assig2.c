// 2. Write application which accept file name from user and create that file.
//    Input  : Demo.txt
//    Output : File created successfully.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
      int fd = 0;
      char Fname[30];

      printf("Enter the file name : \n");
      scanf("%s", Fname);

      fd = creat(Fname , 0777);
      
      if(fd == -1 )
      {
             printf("Unable to creat  the file: \n");
      }
      else
      {
             printf("File created Successfully:\n" );
      }
      return 0;

}
