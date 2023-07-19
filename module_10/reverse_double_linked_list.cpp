#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void reverse_doubly_linked_list(Node *head, Node *tail){
    Node *i = head, *j = tail ;
    for(; i != j && i->next !=j; i = i->next, j = j->prev){
        swap(i->val,j->val);
    }
    // while(i != j && i->next != j){
    //     swap(i->val,j->val);
    //     i = i->next;
    //     j = j->prev;
    // }
    swap(i->val,j->val);
}

void print_linked_list(Node *head){
    for(Node *i = head; i != NULL; i = i->next){
        cout<<i->val<<" ";
    }
    cout<<endl;
}
void print_reverse_linked_list(Node *tail){
    for(Node *i = tail; i != NULL; i = i->prev){
        cout<<i->val<<" ";
    }
    cout<<endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    a->prev = head;
    b->next = c;
    b->prev = a;
    c->prev = b;
    Node *tail = c;

    print_linked_list(head);
    print_reverse_linked_list(tail);
    reverse_doubly_linked_list(head,tail);
    print_linked_list(head);

 
    return 0;
}