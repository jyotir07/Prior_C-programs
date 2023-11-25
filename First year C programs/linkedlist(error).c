// code by Jyotiraditya Singh.
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node *next;
} node;
// now instead of rewtiring the structure again and again we use this line of code
// typeof struct node node;

// making a function named: create_node()

node *create_node(int v)
{ // here node* is the datatype of the function

  node *temp = (node *)malloc(sizeof(node *)); // this allocates the memory for the node
  temp->value = v;
  temp->next = NULL;
  return temp;
}

void insert_at_begining(node *head, int val)
{
  node *temp = create_node(val);
  if (head == NULL)
  {
    head == temp;
  }
  else
  {
    // something (from the last day's question)
    temp->next = head;
    head = temp;
  }
}

void insert_at_end(node *head, int val)
{
  node *temp = create_node(val);
  if (root == NULL)
  {
    root == temp;
  }
  else
  {
    // somthing related to the last class's question again
    node *t = head;
    while (t->next != NULL)
    {
      t = t->next;
    }
    t->next = temp;
  }
}
void insert_after_value(node *head, int val, int x)
{
  node *temp = create_node(val);
  if (head == NULL)
  {
    printf("Linked list empty!\n");
    return;
  }
  else
  {
    node *t = head;
    while (t->value != x)
    {
      t = t->next;
    }
    temp->next = t->next;
    t->next = temp;
  }
}
int main()
{
  /* node *head = create_node(25);
   node *second = create_node(52);
   node *third = create_node(70);
   head->next = second;
   second->next = third;

   node *t = head;
   while (t->next != NULL)
   {
     printf("%d->", t->val);
     t = t->next;
   }
   printf("%d->NULL", t->val);
   return 0;
   */
  node *head = NULL;
  printf("Enter 3 values: ");
  int a, b, c;
  scanf("%d %d %d ", &a, &b, &c);
}
