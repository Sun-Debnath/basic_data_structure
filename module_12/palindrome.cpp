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
void insert_in_list(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail= newNode;
}

void reverse_list(Node *&head, Node *cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

void print(Node *head){
    for(Node *node = head; node != NULL; node = node->next){
        cout<<node->val<<" ";
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        insert_in_list(head,tail,val);
        insert_in_list(head2,tail2,val);
    }
    
    reverse_list(head2,head2);
    int flag =1;
    for(Node *i=head,*j =head2; i != NULL; i=i->next, j=j->next){
        if(i->val != j->val){
            flag = 0;
            break;
        }
    }
    (flag == 1)?cout<<"YES":cout<<"NO";
    return 0;
}