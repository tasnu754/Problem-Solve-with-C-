#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;

    }
};


void insertAtHead(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }

}

void insertAtAny(Node* head, int pos, int val){
    Node* temp = head;
    Node* newNode = new Node(val);

    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

int listSize(Node* head){
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}


int isDupli(Node* head){
    Node* temp = head;
    int dup = 0, f = 0;

    while(temp->next != NULL){
        for(Node* j=temp->next; j!=NULL; j=j->next){
            if(temp->val == j->val){
                dup = 1;
                break;
            }
        }
        if(dup){
            f = 1;
            break;
        }

        temp = temp->next;
        
    }

    return f;
}

void middle(Node* head, int sz){
    Node* temp = head;
    int s = sz / 2;

    if(sz%2 == 0){
      for(int i=0; i<s-1; i++){
          temp = temp->next;
      }
      cout<<temp->val;
      cout<<" "<<temp->next->val;
    }

    else{
      for(int i=0; i<s; i++){
          temp = temp->next;
      }
      cout<<temp->val;

    }

}

int isSorted(Node* head){
    Node* temp = head;
    int in=1, out=1;

    while(temp->next != NULL){

        if(temp->val > temp->next->val){
            out = 0;
            break;
        }

        temp = temp->next;
    }
    return out;
}

void printList(Node* head){
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin>>val;

        if(val != -1){
            insertAtTail(head, tail, val);
        }
        else
            break;
    }

    // cout<<listSize(head)<<endl;;


    // int dup = isDupli(head);
    // if(dup)
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;

    // middle(head, listSize(head));


    // int q;
    // cin>>q;

    // while(q--){
    //     int pos, v;
    //     cin>>pos>>v;

    //     if(pos==listSize(head)){
    //         insertAtTail(head,tail,v);
    //         printList(head);
    //     }
    //     else if(pos==0){
    //         insertAtHead(head, tail, v);
    //         printList(head);
    //     }
    //     else if(pos > listSize(head)){
    //         cout<<"Invalid"<<endl;
    //     }
    //     else{
    //         insertAtAny(head, pos, v);
    //         printList(head);
    //     }

    // }




    // if(isSorted(head))
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;



    return 0;
}