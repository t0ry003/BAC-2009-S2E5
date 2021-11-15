#include <iostream>

using namespace std;

int main() {
    int n, m, a[11][11], b[11][11];
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            b[n + 1 - j][i] = a[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }
}
