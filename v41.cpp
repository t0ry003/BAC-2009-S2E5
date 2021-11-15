#include <iostream>

using namespace std;

int main() {
    int n, a[24][24];
    cin >> n;

    for(int i = 1; i<=n; i++)
        for(int j=1; j<=n; j++)
            a[i][j] = i+j;

    for(int i = 1; i<=n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
