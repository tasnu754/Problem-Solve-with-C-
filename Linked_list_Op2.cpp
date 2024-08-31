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

void print_Reverse(Node* head){

    if(head == NULL)
        return;
    
    print_Reverse(head->next);
    cout<<head->val<<" ";
}

int max_Val(Node* head){
    int max = head->val;

    for(Node* i=head->next; i->next!=NULL; i=i->next){
        if(i->val > max){
            max = i->val;
        }
    }
    
    return max;
}

void des_order_sort(Node* head){

    for(Node* i=head; i->next!=NULL; i=i->next){

        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
    }

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

    // while(true){
    //     int val;
    //     cin>>val;

    //     if(val != -1){
    //         insertAtTail(head2, tail2, val);
    //     }
    //     else
    //         break;
    // }

    // if(listSize(head1) == listSize(head2))
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;


    // print_Reverse(head1);


    // int m = max_Val(head1);
    // cout<<m<<endl;


    des_order_sort(head1);
    printList(head1);




    return 0;
}