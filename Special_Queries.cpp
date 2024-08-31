#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    queue<string> qu;

    while(n--){
        int x;
        cin>>x;

        if(x == 0){
            string s;
            cin>>s;

            qu.push(s);
        }
        else{
            if(!qu.empty()){
                cout<<qu.front()<<endl;;
                qu.pop();
            }            
            else
                cout<<"Invalid"<<endl;
        }
    }


    return 0;
}