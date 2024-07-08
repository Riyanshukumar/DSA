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

node *segregate(node *head){
    node *evenStart = NULL, *evenEnd = NULL, *oddStart = NULL, *oddEnd = NULL;
    for (node *curr = head; curr!=NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x%2==0)
        {
            if (evenStart==NULL)
            {
                evenStart = curr;
                evenEnd = evenStart;
            }
            else
            {
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        }
        else
        {
            if (oddStart==NULL)
            {
                oddStart = curr;
                oddEnd = oddStart;
            }
            else
            {
                oddEnd->next = curr;
                oddEnd = oddEnd->next;
            }
        }
    }
    if (oddStart==NULL || evenStart==NULL)
    {
        return head;
    }
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    return evenStart;

}

int main(){
    node *head = new node(17);
    head->next = new node(15);
    head->next->next = new node(8);
    head->next->next->next = new node(12);
    head->next->next->next->next = new node(10);
    head->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next = new node(4);
    node *new_head = segregate(head);
    node *curr = new_head;
    while (curr!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    return 0;
}