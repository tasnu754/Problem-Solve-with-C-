#include<bits/stdc++.h>

using namespace std;

long long int fib(int n){
    
    if (n == 1) return 0;
    if (n == 2) return 1;


    vector<long long int> dp(n + 1);
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main(){

    int n;
    cin>>n;

    long long f = fib(n);
    cout<<f<<endl;


    return 0;
}