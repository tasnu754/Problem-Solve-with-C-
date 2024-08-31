#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, cnt = 0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++){
        if(!(a[i]>0 && a[i+1]<0) && !(a[i]<0 && a[i+1]>0)){
            cnt++;
            i += 2;
        }
    }

    cout<<cnt<<endl;



    return 0;
}