#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, cnt=1;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());


    for (int i = 1; i < v.size(); ++i) {
        if (v[i] != v[i - 1]) {
            cnt++;
        }
    }

    cout<<cnt<<endl;



    return 0;
}