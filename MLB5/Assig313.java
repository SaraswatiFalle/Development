//3. Write a java program which accept string from user and return difference between frequency of small characters and frequency
//of capital characters.
//Input  : “MarvellouS”
//Output : 6 (8-2)

import java.util.*;
class Assig313
{
    public static int  CountDiff(String str1)
    {
           int iCnt1 = 0 , iCnt2 = 0 ;
           while ( *str1 != '\0' )
           {
                    if( *str1 >= 'A'    &&   *str1 <= 'Z' )
                    {

                           iCnt1 ++;

                    }
                    elseif (*str1 >= 'a'    &&   *str1 <= 'z')
                    {

                           iCnt2 ++;
                    }
                    str1 ++;
                    
            }
           return iCnt1 - iCnt2;
       // System.out.println("MarVeLLOus:" +Data);
    }


    public static void main(String str[])
    {
         Scanner sobj = new Scanner(System.in);
         String str;
         int iRet = 0;

         System.out.println("Enter the String \n");
         str  = sobj.nextLine();


         iRet =  CountDiff(str);


         System.out.printf("Total Capital letters are: "+iRet);

    }
}
