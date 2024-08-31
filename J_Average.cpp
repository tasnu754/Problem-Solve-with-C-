#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    double sum = 0;
    for(int i=0; i<n; i++){
        double val;
        cin>>val;
        sum += val;
    }
    
    float avg = sum / n;

    cout<<fixed<<setprecision(7)<<avg;




    return 0;
}