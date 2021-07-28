/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

//If you are using shared_ptr then more than one pointer can point to this one object
//at a time and it’ll maintain a Reference Counter using use_count() method. 


#include <iostream>
#include <memory>
using namespace std;

class node
{
    public:
        int data;
        node *next;   
        
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
    
};


void insertAtstart(node* &head, int data)
{
    if(head == NULL) {
      head = new node(data);
      return;
    }
     node *temp = new node(data);
     temp->next = head;
     head = temp;
}

void printLL(node* head)
{
  while(head != NULL)
  {
    cout<< head->data <<"---->";
    head = head->next;
  }
  cout << endl;
}

void searchInLL(node* head, int data)
{
    node *temp;
    temp = head;
    
    while(temp!= NULL)
    {
        if(temp->data == data)
        {
            cout << "data is found";
        } 
        temp = temp->next;
     }
}
int main()
{
    node *head = NULL;
  insertAtstart(head,1);
  insertAtstart(head,2);
  insertAtstart(head,3);
  insertAtstart(head,4);
  searchInLL(head,3);
  //printLL(head);
}
