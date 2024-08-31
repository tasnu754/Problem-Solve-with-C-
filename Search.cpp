#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int search_idx(Node* head, int val){
    
    int idx = 0, flag = 0;

    while(head != NULL){
        if(head->val == val){
            flag = 1;
            break;
        }

        idx++;
        head = head->next;
    }

    if(flag)
        return idx;
    else
        return -1;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int val;
            cin >> val;

            if (val != -1)
            {
                insertAtTail(head, tail, val);
            }
            else
                break;
        }

        int x;
        cin>>x;

        cout<<search_idx(head, x)<<endl;
    }

    return 0;
}