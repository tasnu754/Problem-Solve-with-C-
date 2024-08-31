#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, rev = 0;
    cin>>n;

    int num = n;

    while(n != 0){
        int dig = n % 10;
        rev = (rev * 10) + dig;
        n = n / 10;
    }

    cout<<rev<<endl;

    if(num == rev)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}