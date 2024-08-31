#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, flag = 1;
    cin>>n>>m;

    stack<int> st;
    queue<int> qu;

    int stsz = n;
    int qsz = m;

    while(n--){
        int x;
        cin>>x;

        st.push(x);
    }
    
    while(m--){
        int x;
        cin>>x;

        qu.push(x);
    }

    if(stsz == qsz){
        while(stsz--){
            if(st.top() != qu.front()){
                flag = 0;
                break;
            }
            st.pop();
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