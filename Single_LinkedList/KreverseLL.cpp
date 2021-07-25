Node * kReverse(Node *head, int k)
{
    Node *prev = NULL;
    Node *current = head;
    Node *temp;
    int cnt = 1;
    
    while(current != NULL&& cnt <= k)
    {
      temp = current->next;
      current->next = prev;
      prev = current;
      current = temp;
      cnt++;
    }
 
   if(temp != NULL)
   {
       head->next = kReverse(temp,3);
   }
 return prev;
    
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
  head = kReverse(head,3);
  printLL(head); 

}
