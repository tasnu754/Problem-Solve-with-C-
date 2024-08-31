#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m, flag = 1;
    cin>>n;

    stack<int> s1;
    while(n--){
        int x;
        cin>>x;
        s1.push(x);
    }
    cin>>m;

    stack<int> s2;
    while(m--){
        int x;
        cin>>x;
        s2.push(x);
    }

    if(n == m){
        while(!s1.empty()){
 
            if(s1.top() != s2.top()){
                flag = 0;
                break;
            }
            else{
                s1.pop();
                s2.pop();
            }
        }
    }
    else
        flag = 0;

    
    if(flag)
        cout<<"YES";
    else    
        cout<<"NO";

    return 0;
}