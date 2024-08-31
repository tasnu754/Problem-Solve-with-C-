#include<bits/stdc++.h>

using namespace std;

int main(){

    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;

    if(r1 >= l2 && r2 >= l1){
        int l = max(l1, l2);
        int r = min(r1, r2);

        cout<<l<<" "<<r<<endl;
    }
    else
        cout<<"-1"<<endl;


    return 0;
}