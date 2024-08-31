#include<bits/stdc++.h>

using namespace std;

int main(){

     int n, cnt = 0;
     cin>>n;


     while(n--){
        long long num, x = 0;
        cin>>num;

        while(num%2==0){
            x++;
            num = num / 2;
        }

        if(x > cnt){
            cnt = x;
        }
     }

     cout<<cnt<<endl;


    return 0;
}