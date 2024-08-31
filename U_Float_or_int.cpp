#include<bits/stdc++.h>

using namespace std;

int main(){

    float num;
    cin>>num;

    int n = (int)num;
    float n1 = (float)n;

    if(num == n1){
        cout<<"int "<<n<<endl;
    }
    else{
        cout<<"float "<<n<<" "<<fixed<<setprecision(3)<<(num-n)<<endl;
    }




    return 0;
}