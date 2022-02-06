// Copy the capital letters from that STRING into another STRING
// Input : "Marvellous Miulti OS"
// Output : "MMOS"
#include<stdio.h>
void strCpyCapital(char *Start , char *Dest)
{
    while (*Start != '\0')
    {
             if(*Start >= 'A'     &&    *Start <= 'Z')                    
             {
                   *Dest  =  *Start;
                    Dest ++;
             }
             Start ++;
            
    }
    // printf("New  string is : %s\n",Dest);               
}
 
int main()                  
{
    char Arr[20] = "Marvellous Miulti OS";
    char brr[20]; ///empty string

    strCpyCapital(Arr , brr);
    
    printf("New  string is : %s \n",brr);

    return 0;

}