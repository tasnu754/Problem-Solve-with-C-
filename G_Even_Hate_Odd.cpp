#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, even=0, odd=0;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(n%2 != 0)
            cout<<"-1"<<endl;
        else{
            for(int i=0; i<n; i++){
                if(a[i]%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }

            if(even==n || odd==n){
                cout<<n/2<<endl;
            }
            else{
                int x = abs(even-odd)/2;
                cout<<x<<endl;
            }

             
        }
    }


    return 0;
}