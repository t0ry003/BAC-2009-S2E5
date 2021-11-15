#include <iostream>

using namespace std;

int main() {
    int n, k, a[26][26];
    cin >> n >> k;

    for (int i = 1; i <= k + 2; i++)
        for (int j = 1; j <= k + 2; j++)
            a[i][j] = 1;

    for (int i = 1; i <= k + 2; i++)
        for (int j = n - k + 2; j <= n; j++)
            a[i][j] = 2;

    for (int i = n - k + 2; i <= n; i++)
        for (int j = 1; j <= k + 2; j++)
            a[i][j] = 3;

    for (int i = n - k + 2; i <= n; i++)
        for (int j = n - k + 2; j <= n; j++)
            a[i][j] = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
