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
void insert_linked_list(Node *&head, Node *&tail,int pos,int val){
    Node *newNode = new Node(val);
        head = newNode;
        tail = newNode;
}
void insert_at_head(Node *&head,int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&tail, int val){
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head=NULL;
    Node *tail =NULL;

    int q,x,v;
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>x>>v;
        if(head==NULL){
            insert_linked_list(head, tail,x,v);
        }
        else if(x == 0){
            insert_at_head(head,v);
        }
        else if(x == 1){
            insert_at_tail(tail,v);
        }
        cout<<head->val<<" "<<tail->val<<endl;

    }
    return 0;
}