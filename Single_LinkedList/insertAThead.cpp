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
    if(head == NULL)
       head = new Node(data);
       return;
    
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

int main()
{
  Node* head = NULL; 
  insert_at_head(head,4);
  insert_at_head(head,3);
  insert_at_head(head,2);
  insert_at_head(head,1);
  insert_at_head(head,0);
  printLL(head);
    
}





