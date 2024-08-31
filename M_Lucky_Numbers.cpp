#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, found = 0;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        int n = i, flag = 1;

        while(n != 0){
            if(n%10 != 4 && n%10 != 7){
                flag = 0;
                break;
            }
            else{
                n = n/10;
            }
        }

        if(flag){
            found = 1;
            cout<<i<<" ";

        }

    }

    if(!found)
        cout<<"-1";


    return 0;
}