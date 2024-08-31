#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, res = 0;
    char c;
    cin>>a>>c>>b;

    if(c == '+'){
        res = a + b;
    }
    else if(c == '-'){
        res = a - b;
    }
    else if(c == '*'){
        res = a * b;
    }
    else if(c == '/'){
        res = a / b;
    }

    cout<<res<<endl;

    return 0;
}