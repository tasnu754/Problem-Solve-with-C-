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

void previ(Node* &head, Node* curr, Node* &tail){
    
    if(curr->next == NULL){
        head = curr;
        head->prev = NULL;
        return;
    }

    previ(head, curr->next, tail);
    curr->next->next = curr;
    curr->prev = curr->next;
    curr->next = NULL;
    tail = curr;
}


void printList(Node* head){
    Node* temp = head;

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

    previ(head, head, tail);
    printList(head);

    return 0;
}