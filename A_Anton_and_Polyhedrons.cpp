// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n, cnt = 0;
//     cin>>n;

//     while(n--){
//         string s;
//         cin>>s;

//         if(s == "Tetrahedron")
//             cnt += 4;
//         else if(s == "Cube")
//             cnt += 6;
//         else if(s == "Octahedron")
//             cnt += 8;
//         else if(s == "Dodecahedron")
//             cnt += 12;
//         else if(s == "Icosahedron")
//             cnt += 20;
//     }

//     cout<<cnt<<endl;


//     return 0;
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// class StackUsingQueues {
// private:
//     queue<int> q1, q2;
//     int topElement;

// public:
//     // Push element onto stack
//     void push(int x) {
//         q2.push(x);
//         topElement = x;

//         // Move all elements from q1 to q2
//         while (!q1.empty()) {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         // Swap the names of q1 and q2
//         swap(q1, q2);
//     }

//     // Pop element from stack
//     void pop() {
//         if (!q1.empty()) {
//             q1.pop();
//             if (!q1.empty()) {
//                 topElement = q1.front(); // Update the top element
//             }
//         }
//     }

//     // Get the top element of the stack
//     int top() {
//         return topElement;
//     }

//     // Check if stack is empty
//     bool isEmpty() {
//         return q1.empty();
//     }
// };

// int main() {
//     StackUsingQueues stack;

//     stack.push(1);
//     stack.push(2);
//     stack.push(3);
//     stack.push(4);

//     cout << "Top element: " << stack.top() << endl;  // Output: 4
//     stack.pop();
//     cout << "Top element after pop: " << stack.top() << endl;  // Output: 3
//     cout << "Is stack empty? " << boolalpha << stack.isEmpty() << endl;  // Output: false

//     stack.pop();
//     stack.pop();
//     stack.pop();
//     cout << "Is stack empty after popping all elements? " << boolalpha << stack.isEmpty() << endl;  // Output: true

//     return 0;
// }

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


    bool hasCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Move slow pointer by one
            fast = fast->next->next;    // Move fast pointer by two

            if (slow == fast) {         // If they meet, there's a cycle
                return true;
            }
        }

        return false;  // If fast reaches the end, there's no cycle
    }


    
    int main(){
    
        
    
    
        return 0;
    }