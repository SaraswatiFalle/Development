#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;              // INT =4BYTE
    struct node *next ;    // 8  BYTE

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void fun (PNODE p)
{

}
void gun (PPNODE q)
{
     


}

int main()
{
    PNODE  first = NULL;

    fun(first);             //fun(100)

    gun(&first);           //fun(50)


    return 0;
}
