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
    Node *next;
};

Node* merge(Node *a, Node *b)
{
    if(a == NULL)
    {
        return b;
    }
    
    if(b == NULL)
    {
        return a;
    }
    
    Node *c;
    
    if(a->data > b->data)
    {
      c = a;
      c->next = merge(a->next,b);
    }else {
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}

int main()
{
  Node* a = NULL; 
  insert_at_head(a,4);
  insert_at_head(a,3);
  insert_at_head(a,2);
  insert_at_head(a,1);

  Node* b = NULL; 
  insert_at_head(b,5);
  insert_at_head(b,6);
  insert_at_head(b,7);
  insert_at_head(b,8);

 Node* head = merge(a,b);
  printLL(head); 

}





