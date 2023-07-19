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
void check_palindrome(Node *head, Node *tail){
    Node *temp_i = head;
    Node *temp_j = tail;
    bool flag = true;
    for(int i = 0; i <(size(head)/2); i++){
        if(temp_i->val != temp_j->val){
            flag = false;
            break;
        }
        temp_i = temp_i->next;
        temp_j = temp_j->prev;
    }
    (flag == true)?cout<<"YES":cout<<"NO";
    cout<<endl;
}
void print_linked_list(Node *head){
    for(Node *i = head; i !=NULL; i=i->next){
        cout<<i->val<<" ";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_in_linked_list(head, tail,val);
    }

    check_palindrome(head,tail);
    print_linked_list(head);
    
    return 0;
}