#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, cnt = 0;
    cin>>n;

    while(n != 0){
        if(n>=100){
            cnt++;
            n = n-100;
        }
        else if(n>=20){
            cnt++;
            n = n-20;
        }
        else if(n>=10){
            cnt++;
            n = n-10;
        }
        else if(n>=5){
            cnt++;
            n = n-5;
        }
        else if(n>=1){
            cnt++;
            n = n-1;
        }
    }

    cout<<cnt<<endl;


    return 0;
}