// DOUBLY CIRCULAR L.L
#include<iostream>
using namespace std;

typedef struct node
{
       int data;
       struct  node *next;
       struct node  *prev;

}NODE , *PNODE;

class DoublyCL
{
    private:
         PNODE first;
         PNODE last;
         int size;

    public:
         DoublyCL()
         {
             first = NULL ;
             last  = NULL ;
             size  =   0  ;
         }
         void Display();
         int Count();
         void InsertFirst(int no);
         void InsertLast(int no);
         void InsertAtPos(int no , int ipos);
         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(int ipos);
             

};
// Return_Value Class_Name :: Function_Name(Parameters) 
void DoublyCL :: InsertFirst(int no)                              // scope resolution  //declaration
{                                                //insert first is member fun of  cls doubly cl that fun return nthg that fun will 
                                              //  return 1 
       PNODE newn = new NODE;                     

       newn -> data = no;
       newn -> next  = NULL;
       newn -> prev = NULL;

       if( (first  == NULL)  &&  (last == NULL) )
       {
           first = newn;
           last = newn;
       }
       else // ek node asel tar
       {
           newn -> next = first;       //  new  500 -> 100 
           first -> prev = newn;        // 100 -> prev
           first = newn;                // tujha new add 500 ahe

       }
       last -> next = first;        //    100 madhe 400 ahe
       first -> prev = last;        //    ani 400 madhe 100 ahe
       size ++;

}
void DoublyCL :: InsertLast(int no)                              // scope resolution  //declaration
{                                             
       PNODE newn = new NODE;                     

       newn -> data = no;
       newn -> next  = NULL;
       newn -> prev = NULL;

       if( (first  == NULL)  &&  (last == NULL) )
       {
           first = newn;
           last = newn;
       }
       else               // ek node asel tar
       {
                last -> next = newn;   
                last -> prev = last;
                last = newn;

       }
       last -> next = first;       
       first -> prev = last;

       size ++;

}
void DoublyCL :: Display()
{
        PNODE temp = first;

        for(int i = 1;   i <= size;  i++)
        {
              cout<<"|" <<temp->data<<"|-> ";
              temp = temp->next;
        }
        cout<<"\n";
}
void DoublyCL :: Count()
{
    return size;
}
void DoublyCL :: DeleteFirst()
{
         if( (first == NULL )  &&    (last == NULL) )
         {
                      return ;
         }
         else  if(first == last)      //if single node
         {
             delete first;
             first = NULL;
             last  = NULL;
         }
         else    // more than one node
         {
               first =  first -> next ;        // 100 cha -> 200 ala
               delete last -> next ;            // ani 400 cha next la 100 ahe tela delete kara
               first -> prev = last;
               last -> next = first;

         }

         size --;
}
void DoublyCL :: DeleteLast()
{
         if( (first == NULL )  &&    (last == NULL) )
         {
                      return ;
         }
         else  if(first == last)      //if single node
         {
             delete last;         // or    //delete first
             first = NULL;
             last  = NULL;
            
         }
         else    // more than one node
         {
              
               last = last -> prev;             // 300  =  400 -> 300 
               delete last -> next;            //  300 -> 400 delete kara

               first -> prev = last;         // mag parat ring banva
                last -> next = first;   

        
         }
          size --;     // for common

               
         
}
void DoublyCL :: InsertAtPos( int no , int ipos)
{
        if( (ipos < 1 )  &&    (ipos > size + 1) )
         {
                      return ;
         }
         if(ipos == 1)
         {
             InsertLast(no);

         }
         else if (ipos == size +1)
         {
             
                   InsertLast(no);
         }
         else
         {
                     PNODE newn = new NODE;

                     newn -> data = no;
                     newn -> next = NULL;
                     newn -> prev = NULL;

                    PNODE temp = first;

                    for(int i = 1;    i < ipos - 1;  i++)
                    {
                        temp = temp -> next;
                    }
                    newn -> next = temp -> next;
                    newn -> next -> prev = newn;
                    temp -> next = newn;
                    newn -> prev = temp;
                    size ++;

         }
        
}
void DoublyCL :: DeleteAtPos(  int ipos)
{
        if( (ipos < 1 )  ||  (ipos > size ) )
         {
                return ;
         }
         if(ipos ==  1)
         {
               DeleteFirst();

         }
         else if(ipos == size)
         {
               DeleteLast();
         }
         else
         {
                  PNODE temp = first;

                  for(int i = 1;   i < ipos - 1;    i ++)
                  {
                      temp = temp -> next;
                  }
                  temp -> next = temp -> next -> next;
                  delete temp -> next -> prev;
                  temp -> next -> prev = temp;

                  size --;


         }

}


    
int main()
{
        DoublyCL obj;
        

        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(51);
        obj.InsertLast(101);

        obj.InsertAtPos(75 , 3);
        obj.Display();

        int iret = obj.Count();
        cout<<"No of elements are: "<< iret <<"\n" ;

        obj.DeleteAtPos(3);
        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();

        return 0;



       

}