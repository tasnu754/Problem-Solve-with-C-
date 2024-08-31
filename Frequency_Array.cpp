#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "example";
    int freq[26] = {0}; 

    for (char ch : s) {
        // Convert character to index (e.g., 'a' -> 0, 'b' -> 1, ..., 'z' -> 25)
        // and increment the frequency count at that index
        freq[ch - 'a']++;
        
    }

    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }

    return 0;
}

