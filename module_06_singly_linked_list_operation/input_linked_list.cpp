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
void insert_at_tail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tem = head;
    while(tem->next != NULL){
        tem = tem->next;
    }
    tem->next = newNode;
}
void print_linked_list(Node *head){
    Node *tem = head;
    cout<<endl<<endl<<"your linked list:"<<endl;
    while(tem != NULL){
        cout<<tem->val<<" ";
        tem = tem->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}