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
int cnt = 0;
void insert_list(Node *&head, int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        cnt++;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    cnt++;
}
void print_linked_list(Node *head){
    Node *tem = head;
    // cout<<endl<<endl<<"your linked list:"<<endl;
    while(tem != NULL){
        cout<<tem->val<<" ";
        tem = tem->next;
    }
    cout<<endl;
}
void insert_at_any_position(Node *head, int pos,int val){
    Node *newNode = new Node(val);
    Node *tem = head;
    for(int i = 1; i <=pos-1; i++){
        tem = tem->next;
        if(tem == NULL){
            cout<<"Invalid"<<endl;
            return;
        }
            
    }
    newNode->next = tem->next;
    tem->next = newNode;
    print_linked_list(head);
}
void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
    print_linked_list(head);
}

int main()
{
    Node *head = NULL;
    int val;
    // int i=0;    both work;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_list(head, val);
        // i++;
    }
    // cout<<cnt<<endl;
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int pos,v;
        cin>>pos;
        cin>>v;
        if(pos==0){
            insert_at_head(head,v);
        }
        else{
            insert_at_any_position(head, pos, v);
        }

    }
    return 0;
}