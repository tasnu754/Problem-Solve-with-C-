#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    while(!v.empty()){
        int fnt = v.front();
        v.erase(v.begin());
        cout<<fnt<<" ";

        if(!v.empty()){
          int last = v.back();
          v.pop_back();

          cout<<last<<" ";
          
        }

    }



    return 0;
}