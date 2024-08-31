#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n, cnt = 0;
    cin>>n;
    string s = to_string(n);

    for(char c : s){
        if(c == '4' || c == '7'){
            cnt++;
        }

    }

    if(cnt==4 || cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}