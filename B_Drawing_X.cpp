#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<char>> grid(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j && i == N / 2) {
                grid[i][j] = 'X'; 
            } else if (i == j) {
                grid[i][j] = '\\';
            } else if (i + j == N - 1) {
                grid[i][j] = '/';
            } else if (i == N / 2 || j == N / 2) {
                grid[i][j] = '*'; 
            } else {
                grid[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
