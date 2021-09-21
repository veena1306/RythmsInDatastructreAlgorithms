/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node *head = NULL;
struct node
{
    int data;
    struct node *next;
};

void create_LL(struct node**head, int data)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *(head);
    *(head) = temp;
}

void create_another_ll(struct node** head, int data)
{
    struct node *temp;
    
      temp = (struct node*)malloc(sizeof(struct node)); 
      temp->data = data;
      temp->next = *head;
      *head = temp;
    
}

void append_at_end(struct node **head, int data)
{
    struct node *temp = *head;
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = data;
    temp1->next = NULL;
    
    if(*head == NULL)
    {
      *head = temp1;
      return;
    }
    
     while(temp->next != NULL)
     {
        temp = temp->next;
     }

     temp->next = temp1;
}

void insert_after(struct node *prev_node, int data)
{
    if(prev_node == NULL)
    {
      printf("the given previous node is null");
    }
    
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    
}

void printLL()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("there is nothing to display in LL");
    }
    
    temp = head;
    while(temp != NULL)
    {
     printf("data is : %d", temp->data);
     temp = temp->next;
    }
    
    
}

int main()
{
    create_LL(&head,2);  //insert at beginging
    create_LL(&head,3);  //insert at beginging
    create_another_ll(&head,4);   //insert at beginging
    append_at_end(&head,5);  //isert at end
    insert_after(head->next,3);
    printLL();
    return 0;
}
