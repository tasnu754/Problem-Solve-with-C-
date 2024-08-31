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

bool isPal(Node* head, Node* tail){
    
    while(head!=tail && head->prev!=tail){
        if(head->val!=tail->val){
            return false;
        }
        else{
            head = head->next;
            tail = tail->prev;
        }
    }
    return true;
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

    if(isPal(head, tail))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}