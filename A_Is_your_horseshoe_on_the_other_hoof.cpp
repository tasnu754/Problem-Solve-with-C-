#include<bits/stdc++.h>

using namespace std;

int main(){

    int s1, s2, s3, s4, cnt = 0;
    cin>>s1>>s2>>s3>>s4;

    if((s1==s2) || (s1==s3) || (s1==s4)){
        cnt++;
    }
    if((s2==s4) || (s2==s4)){
        cnt++;
    }
    if((s3==s4)){
        cnt++;
    }

    cout<<cnt<<endl;


    return 0;
}