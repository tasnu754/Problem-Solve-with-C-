#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, flag = 1;
    cin>>n;

    bool freq[n+1]={0};

    int x;
    cin>>x;
    while(x--){
        int num;
        cin>>num;

        freq[num] = 1;

    }

    int y;
    cin>>y;
    while(y--){
        int num;
        cin>>num;

        freq[num] = 1;

    }

    for(int i=1; i<=n; i++){
        if(freq[i] == false){
            flag = 0;
        }
    }

    if(flag)
        cout<<"I become the guy."<<endl;
    else    
        cout<<"Oh, my keyboard!"<<endl;


    return 0;
}