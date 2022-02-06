// Copy the small letters from that STRING into another STRING
// Input : "Marvellous Miulti OS"
// Output : "arvellou iulti"

#include<stdio.h>
void strCpySmall(char *Start , char *Dest)
{
    //int i = 0 , iRet = 0;
    while (*Start != '\0')
    {
             if(*Start >= 'a'     &&    *Start <= 'z')                    
             {
                   *Dest  =  *Start;
                    Dest ++;
                     
             }
             Start ++;
    }
   // printf("New  string is : %s \n",Dest);               //Not done error in printf
}
 
int main()                  
{
    char Arr[20] = "Marvellous Miulti OS";
    char brr[20]; ///empty string



    strCpySmall(Arr , brr);
    
    printf("New  string is : %s \n",brr);

    return 0;

}