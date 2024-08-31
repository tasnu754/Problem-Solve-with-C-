#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, l1, l2;
    cin>>n>>l1>>l2;
    l1--, l2--;

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        
        swap(a[l1][i], a[l2][i]);
    }
    for(int i=0; i<n; i++){

        swap(a[i][l1], a[i][l2]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}