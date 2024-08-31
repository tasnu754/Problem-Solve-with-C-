#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    while (m--) {
        string op;
        cin >> op;

        if (op == "substr") {
            int l, r;
            cin >> l >> r;
            l--, r--;  // Convert to 0-based index
            if (l >= 0 && r < s.size() && l <= r) {
                cout << s.substr(l, r - l + 1) << '\n';
            }
        } else if (op == "sort") {
            int l, r;
            cin >> l >> r;
            l--, r--;  // Convert to 0-based index
            if (l >= 0 && r < s.size() && l <= r) {
                sort(s.begin() + l, s.begin() + r + 1);
            }
        } else if (op == "pop_back") {
            if (!s.empty()) {
                s.pop_back();
            }
        } else if (op == "back") {
            if (!s.empty()) {
                cout << s.back() << '\n';
            }
        } else if (op == "reverse") {
            int l, r;
            cin >> l >> r;
            l--, r--;  // Convert to 0-based index
            if (l >= 0 && r < s.size() && l <= r) {
                reverse(s.begin() + l, s.begin() + r + 1);
            }
        } else if (op == "front") {
            if (!s.empty()) {
                cout << s.front() << '\n';
            }
        } else if (op == "push_back") {
            char i;
            cin >> i;
            s.push_back(i);
        } else if (op == "print") {
            int pos;
            cin >> pos;
            pos--;  // Convert to 0-based index
            if (pos >= 0 && pos < s.size()) {
                cout << s[pos] << '\n';
            }
        }
    }

    return 0;
}