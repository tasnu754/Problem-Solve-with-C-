#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;
    int sz = s.size();

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string org =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";


    if(n==1){
        for(int i=0; i<sz; i++){
            int idx = org.find(s[i]);
            cout<<key[idx];
        }
    }
    else{
        for(int i=0; i<sz; i++){
            int idx = key.find(s[i]);
            cout<<org[idx];
        }
    }


    return 0;
}