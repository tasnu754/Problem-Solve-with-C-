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


class mySt{

    public:
        vector<int> st;

        void push(int val){
            st.push_back(val);
        }

        void pop(){
            st.pop_back();
        }

        int top(){
            return st.back();
        }

        bool isEmpty(){
            return st.empty();
        }
};

class myqueue{

    public:
        Node* head = NULL;
        Node* tail = NULL;

        void push(int val){
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

        void pop(){
            if(head != NULL){
                Node* dl = head;
                head = head->next;
                delete dl;
            }
        }

        int front(){
            return head->val;

        }

        bool empty(){
            return head==NULL;
        }

};

int main(){

    int n, m, flag = 1;
    cin>>n>>m;

    int stsz = n;
    int qsz = m;


    mySt s;
    myqueue qu;

    while(n--){
        int val;
        cin>>val;
        s.push(val);
    }
    while(m--){
        int val;
        cin>>val;
        qu.push(val);
    }

    if(stsz == qsz){
        while(stsz--){
            if(s.top() != qu.front()){
                flag = 0;
                break;
            }
            s.pop();
            qu.pop();
        }
    }
    else{
        flag = 0;
    }


    if(flag)
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;

    return 0;
}