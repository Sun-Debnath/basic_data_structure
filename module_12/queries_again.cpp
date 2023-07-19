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
void insert_in_any_position(Node *&head,Node *&tail, int pos,int val){
    Node *newNode = new Node(val);
    // if(head == NULL){
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }
    Node *temp = head;
    for(int i = 1; i <= pos-1; i++){
        temp =temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}
void insert_in_head(Node *&head,Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head =  newNode;
}
void insert_in_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head){
    int cnt = 0;
    for(Node *temp = head; temp != NULL; temp = temp->next){
        cnt++;
    }
    return cnt;
}
void print_doubly_linked_list(Node *head){
    cout<<"L -> ";
    for(Node *temp = head; temp != NULL; temp = temp->next){
        cout<<temp->val<<" ";
    }
    cout<<endl;
}
void print_reverse_linked_list(Node *tail){
    cout<<"R -> ";
    for(Node *temp = tail; temp != NULL; temp = temp->prev){
        cout<<temp->val<<" ";
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q,x,v;
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>x>>v;
        if(x == 0){
             insert_in_head(head, tail,v);
             print_doubly_linked_list(head);
             print_reverse_linked_list(tail);
        }
        else if(x == size(head)) {
            insert_in_tail(head, tail,v);
            print_doubly_linked_list(head);
             print_reverse_linked_list(tail);
        }
        else if (x > size(head)) cout<<"invalid"<<endl;
        else{
         insert_in_any_position(head, tail,x,v);
         print_doubly_linked_list(head);
         print_reverse_linked_list(tail);
        }
    }
    
    return 0;
}