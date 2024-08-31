#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int non_zero_index = 0; 
    
    for (int i = 0; i < n; ++i) {
        if (v[i] != 0) {
            v[non_zero_index++] = v[i];
        }
    }

    while (non_zero_index < n) {
        v[non_zero_index++] = 0;
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }



    return 0;
}