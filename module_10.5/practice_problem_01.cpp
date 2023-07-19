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
int size(Node *head){
    int cnt = 0;
    for(Node *node = head; node != NULL; node = node->next){
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_in_linked_list(head, tail,val);
    }
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_in_linked_list(head2, tail2,val);
    }
    bool flag = true;
    if(size(head) != size(head2)){
        flag = false;
    }
    else{
        for(Node *i=head, *j=head2; i!=NULL; i=i->next, j=j->next){
            if(i->val != j->val){
                flag = false;
                break;
            }
        }
    }
    (flag == true)?cout<<"YES":cout<<"NO";
    return 0;
}