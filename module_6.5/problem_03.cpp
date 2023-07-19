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
void middle_element(Node *head){
    Node *temp = head;
    if (cnt%2 == 0){
        for(int i=1; i<cnt/2; i++){
            temp = temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val;
    }
    else{
        for(int i=1; i<=cnt/2; i++){
            temp = temp->next;
        }
        cout<<temp->val;
    }
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
    middle_element(head);
    
    return 0;
}