#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, cnt = 0;
    cin>>n;

    while(n > 0){
        if(n-5 >= 0){
            cnt++;
            n -= 5;
        }
        else if(n-4 >= 0){
            cnt++;
            n -= 4;
        }
        else if(n-3 >= 0){
            cnt++;
            n -= 3;
        }
        else if(n-2 >= 0){
            cnt++;
            n -= 2;
        }
        else if(n-1 >= 0){
            cnt++;
            n -= 1;
        }
    }

    cout<<cnt<<endl;


    return 0;
}