#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    NODE obj;       //<----// STATIC OBJECT        // 12 bytes memory allocated

    obj.data = 11;
    obj.next = NULL;

    PNODE p = NULL;       // 8 bytes memory allocated
    p  =  &obj;

    PPNODE q = NULL;        // 8 bytes memory allocated 
    q   =  &p;


    return 0;
}
