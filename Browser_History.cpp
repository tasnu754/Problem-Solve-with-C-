#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
        string val;
        Node* prev;
        Node* next;
    
    Node(string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;

    }
};

void insertAtTail(Node* &head, Node* &tail, string val){
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

bool vis(Node* &curr, Node* head, string val){
    Node* temp = head;

    while(temp != NULL){
        if(temp->val == val){
            curr = temp;
            return true;
        }
        temp = temp->next;
    }
    return false;

}


int main(){

    Node* head = NULL;
    Node* tail = NULL;
    Node* curr = NULL;

    while(true){
        string val;
        cin>>val;

        if(val != "end"){
            insertAtTail(head, tail, val);
        }
        else
            break;
    }

    int q;
    cin>>q;
    curr = head;

    while(q--){
        string s;
        cin>>s;

        if(s=="visit"){
            string add;
            cin>>add;

            if(vis(curr, head, add))
                cout<<curr->val<<endl;
            else
                cout<<"Not Available"<<endl;
        }
        else if(s == "prev"){

            if(curr->prev !=NULL){
                curr = curr->prev;
                cout<<curr->val<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        else if(s == "next"){
            if(curr->next !=NULL){
                curr = curr->next;
                cout<<curr->val<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }

    }


   


    return 0;
}