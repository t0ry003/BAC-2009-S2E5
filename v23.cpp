#include "iostream"

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[m][n];
    for(int j=1; j<=n; j++)
        a[1][j] = j;

    for(int i=1; i<=m; i++)
        a[i][1] = i;

    for(int i=2; i<=m; i++)
        for(int j=2; j<=n; j++)
            a[i][j] = a[i-1][j] + a[i][j-1];

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
