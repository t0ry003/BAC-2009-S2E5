#include <iostream>

using namespace std;

int main() {
    int n, m, a[25][25];
    cin >> n >> m;

    int nr = 1;
    for(int j=1; j<=m; j++)
        for(int i=1; i<=n; i++) {
            a[i][j] = nr;
            nr++;
        }

    for(int i=1; i<=n; i++) {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

}
