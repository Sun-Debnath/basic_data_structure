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
void finding_duplicate(Node *head){
    int found = 0;
    Node *temp = head;
   
    while(temp != NULL){
         Node *temp2 = head;
        while(temp2 != NULL){
            //  if(temp->val == temp2->next->val){
                cout<<temp->val;
                cout<<temp2->val;
            //      found = 1;
            //      break;
            //    }
               temp2 = temp2->next;
        }
        temp = temp->next;
    }
    

    // (found == 0)?cout<<"NO":cout<<"YES";
    
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
    finding_duplicate(head);
    
    return 0;
}