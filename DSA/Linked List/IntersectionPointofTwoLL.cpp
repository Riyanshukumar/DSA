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

int intersection(node *h1, node *h2){
    int cnt1 = 0;
    int cnt2 = 0;
    for(node *curr = h1; curr!=NULL; curr=curr->next){
        cnt1++;
    }
    for(node *curr = h2; curr!=NULL; curr=curr->next){
        cnt2++;
    }
    int diff;

    if(cnt1>cnt2){
       diff = cnt1-cnt2; 
       for(int i=0; i<diff; i++){
         h1 = h1->next;
       }
       while (h1!=NULL && h2!=NULL)
       {
           if(h1 == h2){
               return h1->data;
           }
           h1 = h1->next;
           h2 = h2->next;
       }
         return -1;
       
    }
    else
      diff = cnt2-cnt1;
        for(int i=0; i<diff; i++){
             h2 = h2->next;
         }
         while (h1!=NULL && h2!=NULL)
         {
             if(h1 == h2){
                 return h1->data;
             }
             h1 = h1->next;
             h2 = h2->next;
         }
             return -1;
    
}
void print(node *head){
    node *curr = head;
    while (curr!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main(){
    node *head1 = new node(10);
    head1->next = new node(20);
    head1->next->next = new node(30);
    head1->next->next->next = new node(40);
    head1->next->next->next->next = new node(50);
    node *head2 = new node(15);
    head2->next = new node(25);
    head2->next->next = head1->next->next;
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    cout << intersection(head1, head2);
    return 0;
}