// Accept division of student from user and depends on the division
// display exam timing. There are 4 divisions in school as A,B,C,D. Exam
// of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// (Application should be case insensitive)
// Input : C
// Output : Your exam at 9.20 AM
// Input : d
// Output : Your exam at 10.30 AM
#include<stdio.h>
void DisplaySchedule(char chDiv)
{
            if ( chDiv >='a'    &&    chDiv <= 'd'  )
            {
                     if(chDiv == 'a')
                     {            
                            printf(" Your exam time is 7 AM for a\n");
                     }
                     if(chDiv == 'b')
                     {
                         printf(" Your exam time is 8.30 AM for b\n");
                     }
                     if(chDiv == 'c')
                     {
                         printf(" Your exam time is 9.20 AM for c\n");
                     }
                     if(chDiv == 'd')
                     {
                         printf(" Your exam time is 10.30 AM for d\n");
                     }
            }

            else if(chDiv >= 'A'    &&    chDiv <= 'D')
            {
                     if(chDiv == 'A')
                     {            
                            printf(" Your exam time is 7 AM for A\n");
                     }
                     if(chDiv == 'B')
                     {
                           printf(" Your exam time is 8.30 AM for B\n");
                     }
                     if(chDiv == 'C')
                     {
                           printf(" Your exam time is 9.20 AM for C\n");
                     }
                     if(chDiv == 'D')
                     {
                           printf(" Your exam time is 10.30 AM for D\n");
                     }

            }
            

}
int main()
{
    char ch ='\0';
    //bool cRet = false;

    printf("Enter the character: ");
    scanf("%c",&ch);

     DisplaySchedule (ch);
    

    return 0;

}