#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int sz, n;
    cin>>sz>>n;
    cin>>s;

    while(n--){
        for(int i=0; i<sz-1; i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    cout<<s<<endl;



    return 0;
}