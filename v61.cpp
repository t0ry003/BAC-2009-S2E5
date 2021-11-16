#include <iostream>

using namespace std;

int n, a[16][16];

int main() {
    cin >> n;

    for (int j = 1; j <= n; j++)
        a[n][j] = j;

    for (int i = n - 1; i >= 1; i--)
        for (int j = 1; j <= i; j++)
            if (j == 1)
                a[i][j] = a[i + 1][j] + a[i + 1][j + 1];
            else
                a[i][j] = a[i + 1][j] + a[i + 1][j + 1] + a[i + 1][j - 1];


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
