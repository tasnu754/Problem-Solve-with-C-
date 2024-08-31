#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a, b, sum = 0;
        cin>>a>>b;
        int x = min(a, b);
        int y = max(a,b);


        for(int i=x+1; i<y; i++){
            if(i%2 != 0){
                sum += i;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}