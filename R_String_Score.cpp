#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, sc=0;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i] == 'V'){
            sc += 5;
        }
        else if(s[i] == 'W'){
            sc += 2;
        }
        else if(s[i] == 'X' && i<n-1){
            i++;
        }
        else if(s[i] == 'Y' && i<n-1){
            s.push_back(s[i+1]);
            i++;
        }
        else if(s[i] == 'Z' && i<n-1){
                if(s[i+1] == 'V'){
                    sc = sc / 5;
                    i++;
                }
                else if(s[i+1] == 'W'){
                    sc = sc / 2;
                    i++;
                }

                
        }
    }

    cout<<sc<<endl;


    return 0;
}