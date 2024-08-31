#include<bits/stdc++.h>

using namespace std;

long long int eqtn(int x, int n){

    if(n==0){
        return 0;
    }

    long long  int sum = eqtn(x, n-2);

    long long power = 1;
    for (int i = 0; i < n; ++i) {
        power *= x;
    }
    return power + sum;
} 

int main(){

    long long int x,n;
    cin>>x>>n;

    if(n%2 != 0)
        n = n-1;

    long long int sum = eqtn(x,n);

    cout<<sum<<endl;


    return 0;
}