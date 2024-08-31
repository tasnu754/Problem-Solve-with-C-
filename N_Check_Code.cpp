#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, flag = 1;
    string s;
    cin>>a>>b;
    cin>>s;

    if(s[a] == '-'){
        int sz = s.size();
        for(int i=0; i<sz; i++){
            if(!(s[i]>='0' && s[i]<='9') && i!=a){
                flag = 0;
                break;
            }
        }
        if(flag)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
        cout<<"No";
    return 0;
}