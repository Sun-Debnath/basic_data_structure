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
int main()
{
    Node *head1 =NULL;
    Node *head2 =NULL;
    Node *tail =NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
            insert_linked_list(head1, tail,val);
    }
    while(true){
        cin>>val;
        if(val == -1) break;
            insert_linked_list(head2, tail,val);
    }
    if(size(head1) == size(head2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}