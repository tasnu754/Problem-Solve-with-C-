#include<bits/stdc++.h>

using namespace std;

int main(){

        int x;
        cin >> x;

        for(int i=2; i<=x; i++){

            int  flag = 1;

            if (i < 2)
                flag = 0;

            else{

                for (int j = 2; j * j <= i; j++){    
                   if (i % j == 0){
                        flag = 0;
                        break;
                   }
                }
            }

            if (flag)
                cout <<i<<" ";
    
    }



    return 0;
}