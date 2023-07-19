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
void insert_linked_list(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int size(Node *head){
    Node *temp = head;
    int cnt=0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void print_middle(Node *head){
    Node *temp = head;
    for(int i=1; i<(size(head)/2);i++){
        temp = temp->next;
    }
    if(size(head)%2 == 0){
        cout<<temp->val<<" "<<temp->next->val;
    }
    else{
        cout<<temp->next->val;
    }

}
int main()
{
    Node *head =NULL;
    Node *tail =NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
            insert_linked_list(head, tail,val);
    }
    print_middle(head);

    

    
    return 0;
}