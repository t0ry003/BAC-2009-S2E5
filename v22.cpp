#include "iostream"

using namespace std;

int main() {
    int m, n, a[101][101];
    cin >> m >> n;

    int nr = m*n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++) {
            a[i][j] = nr;
            nr--;
        }

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
