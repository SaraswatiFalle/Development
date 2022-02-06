//1.Write a Java program which accept string from user and count number of capital characters.
//Input  : “Marvellous Multi OS”
//Output : 4
import java.util.*;
class Assig311
{
    public static int CountCapital(String str1)
    {
           int iCnt = 0;
           while ( *str1 != '\0' )
           {
                    if( *str1 >= 'A'    &&   *str1 <= 'Z' )
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


         iRet = CountCapital(str);


         System.out.printf("Total Capital letters are: "+iRet);

    }
}