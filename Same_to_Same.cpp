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

int listSize(Node* head){
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void is_Same(Node* head1, Node* head2){

    if(listSize(head1) != listSize(head2)){
        cout<<"NO"<<endl;
    }
    else{
        int flag = 1;

        while(head1!=NULL && head2!=NULL){
            if(head1->val != head2->val){
                flag = 0;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



}

int main(){

    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        int val;
        cin>>val;

        if(val != -1){
            insertAtTail(head1, tail1, val);
        }
        else
            break;
    }

    while(true){
        int val;
        cin>>val;

        if(val != -1){
            insertAtTail(head2, tail2, val);
        }
        else
            break;
    }

    is_Same(head1,head2);

    


    return 0;
}