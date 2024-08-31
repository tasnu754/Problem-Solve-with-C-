#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    int sz = s.size();
    int frq[26] = {0};
    int cnt = 0;

    for(int i=0; i<sz; i++){
        if(s[i]>='a' && s[i]<='z'){
            frq[s[i]-'a']++;
        }
    }

    for(int i=0; i<26; i++){
        if(frq[i]>0){
            cnt++;
        }
    }

    cout<<cnt<<endl;
       

    return 0;
}