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
void find_maximum(Node *head, int max){
    for(Node *i = head; i != NULL; i=i->next){
        if(i->val > max){
            max = i->val;
        }
    }
    cout<<max;
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
    int max = INT_MIN;
    find_maximum(head,max);
    
    return 0;
}