#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<"NO"<<endl;
    }
    else{
     int binNum[32] , flag = 1;

     int i = 0;
     while(n > 0){

        binNum[i] = n % 2;
        n = n / 2;
        i++;
      }

      int l = 0;
      int r = i-1;

      while(l<r){
        if(binNum[l] != binNum[r]){
            flag = 0;
            break;
        }
        l++;
        r--;
      }

      if(flag)
        cout<<"YES"<<endl;
      else  
        cout<<"NO"<<endl;
    }


    return 0;
}