//2. Write a java program which accept string from user and count number of small characters.
//Input  : “Marvellous”
//Output : 9
import java.util.*;
class Assig312
{
    public static int CountSmall(String str1)
    {
           int iCnt = 0;
           while ( *str1 != '\0' )
           {
                    if( *str1 >= 'a'    &&   *str1 <= 'z' )
                    {

                           iCnt ++;

                    }

                           str1 ++;
                    
            }
           return iCnt;
       // System.out.println("MarVeLLOus:" +Data);
    }


    public static void main(String str[])
    {
         Scanner sobj = new Scanner(System.in);
         String str;
         int iRet = 0;

         System.out.println("Enter the String \n");
         str  = sobj.nextLine();


         iRet = CountSmall(str);


         System.out.printf("Total Capital letters are: "+iRet);

    }
}