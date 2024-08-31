#include<bits/stdc++.h>

using namespace std;

int main(){

    long long num, row, col;
    cin>>num;

    row = num / 4;

    if(row%2 == 0)
        col = num % 4;
    else
        col = 3 - (num%4);
    
    cout<<row<<" "<<col;


    return 0;
}


