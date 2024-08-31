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

void dif(Node* head){

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    while(head != NULL){
        if(head->val < minVal){
            minVal = head->val;
        }
        if(head->val > maxVal){
            maxVal = head->val;
        }
        head = head->next;
    }

    cout<<(maxVal - minVal)<<endl;

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

    dif(head);


    return 0;
}