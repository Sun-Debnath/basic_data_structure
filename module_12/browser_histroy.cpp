#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string s;
        Node *next;
        Node *prev;

    Node(string s){
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_in_list(Node *&head, Node *&tail, string s){
    Node *newNode = new Node(s);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print(Node *head){
    for(Node *node = head; node != NULL; node = node->next){
        cout<<node->s<<" ";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string s;
    while(true){
        cin >> s;
        if(s == "end") break;
        insert_in_list(head,tail,s);
    }
    // print(head);
    int q;
    cin >> q;
    Node *temp2 = head;
    for(int i=0; i<q; i++){
        
        
        string s;
        cin >> s;
        // if(s == "visit"){
        //     string s2;
        //     cin >> s2;
        //     while(temp->next != NULL){
        //         if(s2 == temp->s){
        //             cout<<temp->s;
        //     }
        //     }
            
        // }
                if(s == "visit"){
                string s2;
                cin >> s2;
                Node *temp = head;
                 while(temp != NULL){
                  if(s2 == temp->s){
                    
                    temp2 = temp;
                    cout<<temp2->s;
                    cout<<endl;
                    break;
                   }
                  
                 else if(temp->next == NULL){
                    cout<<"Not Available";
                    cout<<endl;
                    break;
                  }
                  temp= temp->next;              
            }
            // temp2 = temp;
            }
            else if (s == "next"){
                if(temp2->next == NULL){
                    cout<<"Not Available";
                    cout<<endl;
                }
                else{
                    temp2 = temp2->next;
                    cout<<temp2->s;
                    cout<<endl;
                }
            }
            else if(s == "prev"){
                if(temp2->prev== NULL){
                    cout<<"Not Available";
                    cout<<endl;
                }
                else{
                    temp2 = temp2->prev;
                    cout<<temp2->s;
                    cout<<endl;
                }
            }
        
    }
    return 0;
}