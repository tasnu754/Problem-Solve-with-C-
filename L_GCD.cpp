#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    if(b > a)
        swap(a, b);
    
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout<<a<<endl;


    return 0;
}