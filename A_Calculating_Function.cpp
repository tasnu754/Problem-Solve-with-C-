#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n, f = 0;
    cin>>n;

    if(n%2==1){
        cout<<(n+1)/-2<<endl;
    }
    else
        cout<<n/2;


    return 0;
}