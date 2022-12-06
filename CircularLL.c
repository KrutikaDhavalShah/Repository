
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if((*First == NULL) && (*Last == NULL))        //Empty LL
  {
    *First = *Last = newn;      
    (*Last)->next = *First;    //This maintains circular LL

  }
  else      // LL contains 1 node
  {
    newn->next = *First;
    *First = newn;
    *First = *Last = newn;
    (*Last)->next = *First; 
  }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if((*First == NULL) && (*Last == NULL))        //Empty LL
  {
    *First = *Last = newn;
    (*Last)->next = *First;

  }
  else      // LL contains 1 node
  {
    (*Last)->next = newn;
    *Last = newn;
    (*Last)->next = *First;
  }
}

void Display(PNODE First, PNODE Last)
{
  printf("Elements of Linked List are : \n");

  do
  {
    printf("| %d |->",First->data);
    First = First->next;
  } while (First != Last->next);
  printf("\n");  
}


int main()
{

  PNODE Head = NULL;
  PNODE Tail = NULL;

  InsertFirst(&Head, &Tail, 51);
  InsertFirst(&Head, &Tail, 21);
  InsertFirst(&Head, &Tail, 11);

  Display(Head,Tail);

  InsertLast(&Head, &Tail, 101);
  InsertLast(&Head, &Tail, 111);
  InsertLast(&Head, &Tail, 121);

  Display(Head,Tail);

 


  return 0;
}