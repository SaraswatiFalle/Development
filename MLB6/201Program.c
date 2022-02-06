#include<stdio.h>
#include<stdlib.h>    // malloc calloc

struct node
{
        int data ;               //   -------                                   pointer size = 8
       struct  node *next ;      //             // self referencal structure    // int = 4      8+4 = 12



};
typedef struct node NODE;          // (new name NODE) struct node
typedef struct node *PNODE;        // struct node *P means pointer
typedef struct node **PPNODE;      // struct node **PP  2Pointers


int main()
{
       PNODE  First  =  NULL;        //  struct node *  First = NUll  // PNODE means line no 13
  
       return 0;

}