#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, x, y;
    cin>>n>>m;

    char ar[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ar[i][j];
        }
    }
    cin>>x>>y;
    x--, y--;
    if(ar[x][y-1]=='x' && ar[x-1][y]=='x'
     && ar[x][y+1]=='x' && ar[x+1][y]=='x'
      && ar[x-1][y-1]=='x'  && ar[x-1][y+1]=='x'
       && ar[x+1][y-1]=='x'  && ar[x+1][y+1]=='x')
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


    return 0;
}