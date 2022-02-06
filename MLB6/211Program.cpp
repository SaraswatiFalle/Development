//  Single circular LL  in  c++


#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE ; // 2 pahjen facta

class  SinglyCl
{
      private :
          PNODE first;             //---  CONSTRUCTER   ALL TILL PUBLIC
          PNODE last ;
          int size;

      public :
           SinglyCl()
           {
               first = NULL;
               last = NULL;
               size = 0;
           }


};

void Display()
{
        PNODE temp  = first;

        if((first == NULL) && (last == NULL))
        {
             return;
        }
        do
        {
           cout<<"|"<<temp->data<<"|->";
           temp = temp->next;
        } while (temp != last->next);

        cout<<"\n";
        
}

int Count()
{
   return size;
}

void InsertFirst(int no)
{
    PNODE newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;
    
    if( (first == NULL)  && (last == NULL ) )  // LL is empty
    {
        first = newn;          //first = 100 and newn = 100
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;    // To mainatain circular nature
    size ++;
}

void InsertLast(int no)
{
    
    PNODE newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;
    
    if( (first == NULL)   &&  (last == NULL) )  // LL is empty
    {
        first = newn;          
        last = newn;
    }
    else
    {
          last->next = newn  ;
          last = newn;


    }
    last->next = first;    // To mainatain circular nature
    size ++;
}

void InsertAtPos( int no, int ipos)
{
        if((ipos < 1)   ||  (ipos > (size + 1)))      // INVALID POS
        {
            return ;
        }
        if(ipos == 1)
        {
            InsertFirst(no);

        }
        else if(ipos == size + 1)     
        {
            InsertLast(no);

        }
        else
        {
              PNODE newn = new NODE;

              newn -> data = no;
              newn -> next = NULL;

              PNODE temp  = first;

              for(int i = 0;   i < ipos-1 ;   i++)
              {
                  temp = temp->next;
              }
              newn->next = temp->next;
              temp->next = newn;

              size ++;


        }
}

void DeleteFirst()

{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        
    }
    else
    {
        first = first->next;
        delete last-> next;
        last->next = first;
    }
    size -- ;
}

void DeleteLast()
{
    PNODE temp = first;
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        
    }
    else
    {    
        while(temp->next != last)          //goes till 300 address
        {
            temp = temp->next;
        }
        delete last;
        last = temp;

        last->next = first;
    }
    size -- ;
}
void DeleteAtPos(int ipos)
{
       if((ipos < 1)  ||  (ipos > size))
       {
           return ;
       }
       if(ipos == 1)
       {
             DeleteFirst();
       }
       else if(ipos == isize)
       {
           DeleteLast();
       }
       else
       { 
              PNODE temp = first;
              for(int i = 1;    i < ipos-1 ;    i++)
              {
                  temp = temp -> next;
              }

              PNODE targated   = temp ->next;

              temp-> next   = targated->next;
              delete targated;

              size --;
  

       }
       


}
};
int main()
{

     SinglyCl obj;

    int iret = 0;
    
    obj.InsertFirst( 51);
    obj.InsertFirst( 21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    
    obj.Display();
    iret = obj.Count();
    cout<<"Number of elemenst are :" <<iret<<"\n";

    obj.DeleteAtPos(4);

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    



    
    
    
    return 0;
}
