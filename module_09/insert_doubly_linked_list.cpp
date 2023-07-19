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
    // tail = tail->next;
    tail = newNode;
}
int size(Node *head){
    int cnt = 0;

    Node *temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    // for(Node *temp = head; temp != NULL; temp = temp->next){
    //     cnt++;
    // }
    return cnt;
}
void print_doubly_linked_list(Node *head){
    for(Node *temp = head; temp != NULL; temp = temp->next){
        cout<<temp->val<<" ";
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    while(true){
        cout<<"option 1: insert value in doubly linked list:"<<endl;
        cout<<"option 2: print the list:"<<endl;
        cout<<"option 0: exit:"<<endl;
        int option;
        cin>>option;
        if(option == 1){
            int pos, val;
            cout<<"enter position:"<<endl;
            cin>>pos;
            cout<<"enter value:"<<endl;
            cin>>val;

            if(pos == 0) insert_in_head(head, tail,val);
            else if(pos == size(head)) insert_in_tail(head, tail,val);
            else if (pos > size(head)) cout<<"invalid"<<endl;
            else insert_in_any_position(head, tail,pos,val);
        }
        else if(option == 2) print_doubly_linked_list(head);
        else if(option == 0) break;
    }
    
    // int val;
    // while(true){
    //     cin >> val;
    //     if(val == -1) break;
    //     insert_in_tail(head, tail, val);
    // }
    // print_doubly_linked_list(head);
    return 0;
}