#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    int sz = s.size();
    int lcnt=0, rcnt=0, cnt=0;

    if(s[0]=='L')
        lcnt++;
    else
        rcnt++;

    for(int i=1; i<sz; i++){
        if(s[i]=='L')
            lcnt++;
        else
            rcnt++;   
        
        if(lcnt == rcnt){
            cnt++;

        }
    }

    cout<<cnt<<endl;
    lcnt = 0; rcnt=0;

    if(s[0]=='L')
        lcnt++;
    else
        rcnt++;

    int j=0;

    for(int i=1; i<sz; i++){
        if(s[i]=='L')
            lcnt++;
        else
            rcnt++;   
        
        if(lcnt == rcnt){
            for(; j<=i; j++){
                cout<<s[j];
                
            }
            j = i+1;
            cout<<endl;

        }
    }


    return 0;
}

