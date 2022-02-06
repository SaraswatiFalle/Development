// Write a program which accept string from user and display it in reverse order.
// Input  : “MarvellouS”
// Output : “SuollevraM”
#include<stdio.h>
void strlenX (char *s1)        
{    

     int l , i = 0;
     char temp;
     
     for( s1[i] =0;  s1[i] < *s1/2;   s1++)
     {
            temp            =   s1[i];
            s1[i]           =   s1[l - 1 - i];
            s1[l - 1 - i]   =   temp;
     }
     printf(" %s ", *s1);
    

       

}

int main()
{                                                            //     RUN NOT DONE PROGRAM
    char Arr[20];
    //int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n']s",Arr);

    strlenX (Arr);
    
    return 0;

}