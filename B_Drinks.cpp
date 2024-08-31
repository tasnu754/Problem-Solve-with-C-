#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    double res = 0;
    int t = n;

    while(t--){
        double x;
        cin>>x;
        res = res + x;
    }

    res = res / n;
    cout<<fixed<<setprecision(12)<<res<<endl;


    return 0;
}