#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i += k) {
        int min_val = INT_MAX;
        for (int j = i; j < i + k && j < n; j++) {
            if (v[j] < min_val) {
                min_val = v[j];
            }
        }
        cout << min_val << " ";
    }


    return 0;
}