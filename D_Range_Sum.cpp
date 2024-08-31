#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        unsigned long long l, r;
        cin>>l>>r;
        if (l > r) {
            swap(l, r);
        }
        l--;

        unsigned long long lr = (l*(l+1)) / 2;
        unsigned long long rr = (r*(r+1)) / 2;

        cout<<rr-lr<<endl;


    }

    return 0;
}
