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
class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
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
    void pop(){
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0) return true;
        else return false;
    }
};
class myStack
{
    public:
    Node *head  = NULL;
    Node *tail  = NULL;
    int sz = 0;
    void push(int val){
        sz++;
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
    void pop(){
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top(){
        return tail->val;
    }
    bool empty(){
        // (sz == 0)? return true: return false;
        if(sz == 0) return true;
        else return false;
    }
};
int main()
{
    list<int> l1,l2;
    myQueue q;
    myStack s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!s.empty()){
        l1.push_back(s.top());
        s.pop();
    }
     while(!q.empty()){
        l2.push_back(q.front());
        q.pop();
    }
    (l1 == l2)?cout<<"YES":cout<<"NO";
    // int flag=1;
    // if(n!=m){
    //     flag = 0;
    // }
    // else{
    //     while(!s.empty()){
    //         if(s.top() != q.front()){
    //             flag = 0;
    //             break;
    //         }
    //         s.pop();
    //         q.pop();
    //     }
    // }
    // (flag == 1)?cout<<"YES":cout<<"NO";
    return 0;
}