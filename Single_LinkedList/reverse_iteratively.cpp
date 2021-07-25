/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Node
{
    public :
    int data;
    Node* next;
    
    Node(int data)
    {
     this->data = data;   
     next = NULL; 
    }
    
};

void insert_at_head(Node* &head, int data)
{
    if(head == NULL) {
       head = new Node(data);
       return;
    }
    
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printLL(Node * head)
{
    if(head != NULL)
    {
        cout << head->data <<"--->";
        head = head->next;
    }
     cout << endl;
    
}


void insert_in_middle(Node* &head, int data, int pos)
{
    if (pos == 0) {
     insert_at_head(head,data);
    } else {
        Node* temp = head;
        for(int i = 0; i <= pos-1; i++)
        {
            temp = temp->next;
        }
        Node *temp1 = new Node(data);
         temp1->next = temp->next;
         temp->next = temp1;
    }
}

Node *revereRec(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* sHead = revereRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
}

void reverse(Node * head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *temp;
    
    while(current != NULL)
    {
      temp = current->next;
      current->next = prev;
      prev = current;
      current = temp;
    
    }
    head = prev;
    return;
}

int main()
{
  Node* head = NULL; 
  insert_at_head(head,4);
  insert_at_head(head,3);
  insert_at_head(head,2);
  insert_at_head(head,1);
  insert_at_head(head,0);
  insert_in_middle(head,100,3);
  printLL(head);
  head = revereRec(head);
  printLL(head);
  reverse(head);
  printLL(head); 
}





