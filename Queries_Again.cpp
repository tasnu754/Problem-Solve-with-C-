#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
        int val;
        Node* prev;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->prev = NULL;
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
        head->prev = newNode;
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
    temp->next->prev = newNode;
    newNode->prev = temp;
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
        newNode->prev = tail;
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

void printL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printR(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}


int main(){

    int q, cnt = 0;
    cin>>q;

    Node* head = NULL;
    Node* tail = NULL;

    while(q--){
        int pos, val;
        cin>>pos>>val;

        if(pos <= listSize(head)){

            if(pos == 0){
                insertAtHead(head, tail, val);
            }
            else if(pos == listSize(head)){
                insertAtTail(head, tail, val);
            }
            else{
                insertAtAny(head, pos, val);
            }

            cout<<"L -> ";
            printL(head);
            cout<<"R -> ";
            printR(tail);

        }
        else{
            cout<<"Invalid"<<endl;
        }

    }


    return 0;
}