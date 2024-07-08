#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node *next;
   node(int x){
    data = x;
    next = NULL;
   }
};

/*node *recRev(node *head){
   if(head==NULL || head->next==NULL) return head;

   node *rest_head = recRev(head->next);
   node *rest_tail = head->next;
   rest_tail->next = head;
   head->next = NULL;
   return rest_head;
}*/
node *recRev(node *curr, node *prev){
   if(curr==NULL) return prev;
   node *next = curr->next ;
   curr->next = prev;
   return recRev(next,curr);
}

int main() {
   // Create a linked list
   node *head = new node(1);
   head->next = new node(2);
   head->next->next = new node(3);
   head->next->next->next = new node(4);
   head->next->next->next->next = new node(5);

   // Print the original linked list
   cout << "Original Linked List: ";
   node *temp = head;
   while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;

   // Reverse the linked list recursively
   head = recRev(head, NULL);

   // Print the reversed linked list
   cout << "Reversed Linked List: ";
   temp = head;
   while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;

   return 0;
}

/*int main() {
   // Create a linked list
   node *head = new node(1);
   head->next = new node(2);
   head->next->next = new node(3);
   head->next->next->next = new node(4);
   head->next->next->next->next = new node(5);

   // Print the original linked list
   cout << "Original Linked List: ";
   node *temp = head;
   while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;

   // Reverse the linked list recursively
   head = recRev(head);

   // Print the reversed linked list
   cout << "Reversed Linked List: ";
   temp = head;
   while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;

   return 0;
}*/