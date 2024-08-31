#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, flag = 1, cnt = 1;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            flag = 0;
            break;
        }
    }

    int t = 1;

    if(flag){
        while(true){

            for(int i=0; i<n; i++){
                arr[i] = arr[i]/2;  
            }
        
            for(int i=0; i<n; i++){
                if(arr[i]%2 != 0){
                    t = 0;
                }
            
            }

            if(t)
                cnt++;
            else 
                break;
        }
        cout<<cnt<<endl;

    }
    else
        cout<<"0"<<endl;




    return 0;
}