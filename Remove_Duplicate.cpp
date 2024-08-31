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

void rem_Dupli(Node* head){

    if(head==NULL) return;

    Node* temp = head;

    while(temp != NULL){
        
        Node* j = temp;

        while(j->next!=NULL){

            if(temp->val == j->next->val){

                Node* del = j->next;
                j->next = j->next->next;
                delete del;
            }
            else{
                 j=j->next;
            }
        }
        temp = temp->next;
    }

}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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

    rem_Dupli(head);
    printList(head);


    return 0;
}