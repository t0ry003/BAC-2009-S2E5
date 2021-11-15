#include <iostream>

using namespace std;

int main() {
    int n, a[24][24];
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (i == j)
                a[i][j] = 2;
            if (i < j)
                a[i][j] = 1;
            if (i > j)
                a[i][j] = 3;
        }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
