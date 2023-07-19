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
bool cycle_detection(Node *head){
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b;
    // c->next = NULL;
    bool flag = cycle_detection(head);
    (flag == true)?cout<<"yes cycle":cout<<"there is no cycle";
    return 0;
}