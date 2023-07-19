#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_linked_list(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_reverse(Node *h){
    if(h == NULL) return; // base case
    // cout<<h->val<<" ";   // print as a normal way
    print_reverse(h->next);
    cout<<h->val<<" ";   // for reversing 
}
void print_linked_list(Node *head){
    for(Node *i = head; i != NULL; i=i->next){
        cout<<i->val<<" ";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_linked_list(head,tail,val);
    }
    print_reverse(head);
    print_linked_list(head);
    return 0;
}