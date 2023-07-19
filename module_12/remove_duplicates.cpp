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
void sorted(Node *head){
  for(Node *i= head; i->next!=NULL; i=i->next){
    for(Node *j= i->next; j !=NULL ; j=j->next){
        if(i->val > j->val){
            swap(i->val,j->val);
        }
    }
  }
}
void print(Node *head){
    for(Node *node = head; node != NULL; node = node->next){
        cout<<node->val<<" ";
    }
    cout<<endl;
}
void delete_duplicate(Node *&head){
    // if(head == NULL) return head;
    Node *temp = head;
    while(temp->next != NULL){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next;
        }
        if(temp->next == NULL) break;
        else if( temp->val != temp->next->val){
            temp = temp->next;
        }
    }
        
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        insert_in_list(head,tail,val);
    }
//  print(head);
 sorted(head);
//  print(head);
    
    delete_duplicate(head);
    print(head);
    return 0;
}