#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, grp = 1;
    cin>>n;

    int m, x;
    cin>>m;
    n--;

    while(n--){
        cin>>x;

        if(m != x)
            grp++;
        
        m = x;
    }

    cout<<grp<<endl;


    return 0;
}