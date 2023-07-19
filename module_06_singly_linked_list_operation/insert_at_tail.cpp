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
void insert_at_tail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tem = head;
    while(tem->next != NULL){
        tem = tem->next;
    }
    tem->next = newNode;
}
void insert_at_any_position(Node *&head, int pos,int val){
    Node *newNode = new Node(val);
    // if(pos == 0){
    //     head = newNode;
    //     return;
    // }
    Node *tem = head;
    for(int i = 1; i <=pos-1; i++){
        tem = tem->next;
        if(tem == NULL){
            cout<<endl<< "invalid index"<<endl<<endl;
            return;
        }
    }
    newNode->next = tem->next;
    tem->next = newNode;
}
void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}
// Node insert_at_head_linked_list(Node *&head, int val){
//     Node *newNode = new Node(val);

//     newNode->next = head;
//     head = newNode;
//     return *head;
// }
void delete_from_any_position(Node *head, int pos){
    Node *temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
        if(temp == NULL){
            cout<<endl<<"invalid index"<<endl<<endl;
            return;
        }
    }
    if(temp->next == NULL){
        cout<<endl<<"invalid index"<<endl<<endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head){
    if(head == NULL){
        cout<<endl<<"head isn't available "<<endl<<endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void print_linked_list(Node *head){
    Node *tem = head;
    cout<<endl<<endl<<"your linked list:"<<endl;
    while(tem != NULL){
        cout<<tem->val<<" ";
        tem = tem->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while(true){
    cout<<"option 0: insert at head"<<endl;//done
    cout<<"option 1: insert at tail"<<endl;// done
    cout<<"option 2: insert at any position"<<endl;//done
    cout<<"option 3: print linked list:"<<endl;//done
    cout<<"option 4: delete from any position:"<<endl;//done
    cout<<"option 5: delete head:"<<endl;//done
    cout<<"option 6: insert a linked list at tail:"<<endl;
    cout<<"option 7: insert a linked list at any position:"<<endl;
    cout<<"option 8: stop execution"<<endl;
    int option;
    cin>>option;
    if(option == 1){
        cout<<"enter value:";
        int val;
        cin>>val;
        insert_at_tail(head, val);
    }
    else if(option == 0){
        int val;
        cout<<"enter value:";
        cin>>val;
        insert_at_head(head, val);
    }
    else if (option == 3){
        print_linked_list(head);
    }
    else if(option == 2){
        int pos,val;
        cout<<"enter position:";
        cin>>pos;
        cout<<"enter value:";
        cin>>val;
        if(pos==0){
            insert_at_head(head,val);
        }
        else{
            insert_at_any_position(head, pos, val);
        }
    }
    else if(option == 4){
        int pos;
        cout<<"enter position:";
        cin>>pos;
        if(pos == 0){
            delete_head(head);
        }
        else{
            delete_from_any_position(head,pos);
        }
    }
    else if(option == 5){
        delete_head(head);
    }
    else if(option == 6){
        int val;
        cout<<"enter linked list:"<<endl;
        while(true){
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    }
    else if(option == 7){
        int pos,val;
        cout<<"enter position:";
        cin>>pos;
        cout<<"enter linked list:";
        int i=0;
        // Node *temp = head;
        while(true){
            
            cin>>val;
            if(val == -1) break;
            if(pos==0){
              insert_at_head(head,val);
              pos++;
            }
            else{
                insert_at_any_position(head, pos+i, val);
            }
            i++;
        }  
    }
    else if (option == 8){
        break;
    }
    }
    return 0;
}