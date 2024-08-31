#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b, sum=0;
    cin>>n>>a>>b;

    for(int i=1; i<=n; i++){
        int s = 0;
        int x = i;
        while(x!=0){
            int dig = x%10;
            s += dig;
            x = x/10;
        }

        if(s>=a && s<=b){
            sum += i;
        }
    }

    cout<<sum;

    return 0;
}