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

int listSize(Node *head)
{
    Node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

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

void delete_Any(Node *&head, Node* &tail, int pos)
{
    Node *temp = head;

    if (pos < listSize(head) && head != NULL)
    {

        if (pos == 0)
        {
            Node *del = head;
            head = head->next;
            delete del;
        }
        else if(pos == listSize(head)-1){
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            
            tail = temp;
            Node *del = temp->next;
            temp->next = NULL;
            delete del;


        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            Node *del = temp->next;
            temp->next = temp->next->next;
            delete del;

        }
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

int main()
{

    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertAtHead(head, tail, v);
            printList(head);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
            printList(head);
        }
        else
        {
            delete_Any(head,tail, v);
            printList(head);
        }
    }

    return 0;
}