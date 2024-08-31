#include<bits/stdc++.h>

using namespace std;


int prime(int a[], int n){

    int p = 0;

    for(int i=0; i<n; i++){
        if(a[i] > 2){

            for (int i = 2; i * i <= a[i]; i++){
                if (a[i] % i != 0){
                    p++;
                }
            }
        }       
    }

    return p;
}

int pali(int a[], int n){

    for(int i=0; i<n; i++){
      int l = 0;
      int r = n-1;
      int flag = 1;

      while(l < r){
          if(a[l] != a[r]){
              flag = 0;
              break;
          }
      }
    }
}

int div(int a[], int n){

}


int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"The maximum number : "<<*max_element(a, a + n)<<endl;
    cout<<"The minimum number : "<<*min_element(a, a + n)<<endl;
    cout<<"The number of prime numbers : "<<prime(a, n)<<endl;
    cout<<"The number of palindrome numbers : "<<pali(a, n)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<div(a, n)<<endl;


    return 0;
}