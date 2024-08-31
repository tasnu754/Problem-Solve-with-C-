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


int main(){

    list<int> ls;

    while(true){
        int val;
        cin>>val;

        if(val != -1){
            ls.push_back(val);
        }
        else
            break;
    }

    ls.sort();

    ls.unique();

    for(auto it = ls.begin(); it!=ls.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}