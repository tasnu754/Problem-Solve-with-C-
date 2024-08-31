#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    unsigned long result = n * k * a;

    if (result >= -2147483648LL && result <= 2147483647LL) 
    {
        cout << "int" << endl;
    } else if (result >= -9223372036854775808LL && result <= 9223372036854775807LL) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }

    return 0;
}
