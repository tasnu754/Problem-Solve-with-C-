#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    while(cin>>a>>b){
        
        if(a<=0 || b<=0)
            break;

        else{
            int sum = 0;
            int x = min(a, b);
            int y = max(a,b);

            for(int i=x; i<=y; i++){
                sum += i;
            }

            for(int i=x; i<=y; i++){
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;

        }
    }


    return 0;
}