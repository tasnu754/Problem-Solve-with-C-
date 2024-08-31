#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, flag = 1;
        cin >> x;

        if (x < 2)
            flag = 0;

        else{

            for (int i = 2; i * i <= x; i++){
                if (x % i == 0){
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}