#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main(){
    Node *head = new Node(10);
    Node *tmp1 = new Node(20);
    Node *tmp2 = new Node(30);

    head->next = tmp1;
    tmp1->next = tmp2;

    return 0;
}
