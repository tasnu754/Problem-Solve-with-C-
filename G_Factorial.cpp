#include<bits/stdc++.h>

using namespace std;

long long int fact(long long int n){
    if(n==0 || n==1)
        return 1;


    return n * fact(n-1);
}

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        cout<<fact(n)<<endl;
    }


    return 0;
}