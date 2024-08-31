#include<bits/stdc++.h>

using namespace std;

int main(){

    int x, y;
    cin>>x>>y;

    int temp;
    temp = x;
    x = y;
    y = temp;

    cout<<x<<" "<<y<<endl;


    return 0;
}