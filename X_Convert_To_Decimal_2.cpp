#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int cnt = 0;

        while(n != 0){
            int rem = n % 2;
            if(rem == 1)
                cnt++;
            
            n = n / 2;

        }

        int bin = 0, p = 0;
        while(cnt--){
            bin = bin + (1 * pow(2,p));
            p++;
        }

        cout<<bin<<endl;
    }


    return 0;
}