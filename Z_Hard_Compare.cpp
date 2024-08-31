#include<bits/stdc++.h>

using namespace std;

int main(){

    double a, b, c, d;
    cin>>a>>b>>c>>d;

    double x = b * log(a); 
    double y = d * log(c); 

    if(x > y)
        cout<<"YES"<<endl;
    else   
        cout<<"NO"<<endl;



    return 0;
}