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

int main()
{
    PNODE  p  =  NULL;       
    PPNODE q  =  NULL;        
                             // 12
    p  = (PNODE)malloc(sizeof(NODE));
    q  =  &p;


    return 0;
}
