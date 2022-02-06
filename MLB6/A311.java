import java .util.*;

class StringX
{

         public String str;

         public void Accept()
         {
                      Scanner sobj = new Scanner (System .in);
                      System.out.println("Enter the string: \n");
                      str = sobj . nextLine();
         }
         public  void Display()
         {
                     System.out.println("String is : " +str);
         }
}
class  Marvellous  extends  StringX 
{
        public int CountCapital()
        {
                 int iCnt = 0;
                 while(*str != '\0')
                 {
                         if( (*str >= 'A')    &&   (*str <= 'Z') )
                         {
                                 iCnt ++;
                         }
                         str ++;
                 }
                 return iCnt ;
        }
}

class A311
{
    public static void main(String arg[])
    {
        Marvellous  mobj =  new  Marvellous();
        int  iRet  =  0;
        mobj.Accept();
        mobj.Display();
        iRet = mobj . CountCapital();
        System.out.println( " No of Capital characters are: %d \n",iRet ) ;

     }
}
