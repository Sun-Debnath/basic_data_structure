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
void insert_in_linked_list(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse_linked_list(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    for(; i != j && i->next != j; i = i->next,j = j->prev){
        swap(i->val, j->val);
    }
    swap(i->val, j->val);
}
void print_linked_list(Node *head){
    for(Node *i = head; i !=NULL; i=i->next){
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
        insert_in_linked_list(head, tail,val);
    }

    reverse_linked_list(head,tail);
    print_linked_list(head);
    
    return 0;
}