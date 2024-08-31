#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    int sz = s.size();
    int e=0, g=0, y=0, p=0, t=0;

    for(char c : s){
        c = toupper(c);
        if(c == 'E')
            e++;
        else if(c == 'G')
            g++;
        else if(c == 'Y')
            y++;
        else if(c == 'P')
            p++;
        else if(c == 'T')
            t++;
    }

    int res = min({e,g,p,y,t});
    cout<<res<<endl;





    return 0;
}