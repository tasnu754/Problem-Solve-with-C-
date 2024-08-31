#include<bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin>>q;

    list<int> ls;

    while(q--){
        int x, v;
        cin>>x>>v;

        if(x==0){
            ls.push_front(v);
        }
        else if(x == 1){
            ls.push_back(v);
        }
        else{
            if(v < ls.size()){
                if(v==0){
                    ls.pop_front();
                }
                else if(v == ls.size()-1){
                    ls.pop_back();
                }
                else{
                    auto it = ls.begin();
                    for(int i=1; i<=v; i++){
                        it++;
                    }

                    ls.erase(it);
                }
            }
        }

        cout<<"L -> ";
        for(auto it=ls.begin(); it!=ls.end(); it++){
            cout<<*it<<" ";
        }

        cout<<endl;

        cout<<"R -> ";
        ls.reverse();
        for(auto it=ls.begin(); it!=ls.end(); it++){
            cout<<*it<<" ";
        }

        cout<<endl;
        ls.reverse();
    }


    return 0;
}