 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<fcntl.h>
 //#include<io.h>

 int main()
 {
      int fd = 0; // file discripter
     char Fname[30];

     printf("Enter the file name :");
     scanf("%s", Fname);

     fd = creat(Fname,0777);

     if(fd == -1)
     {
          printf("Unable to create the file\n");
     }
     else
     {
             printf(" Successfully created file\n");
     }

     return 0;
 }

