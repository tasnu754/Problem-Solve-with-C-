#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    cin>>n>>x;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<x; i++){
        int temp2 = a[0];
        for(int j=0; j<n; j++){
            if(j == n-1){
                a[0] = temp2;
            }
            else{
            int temp1 = a[j+1];
            a[j+1] = temp2;
            temp2 = temp1;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }



    return 0;
}