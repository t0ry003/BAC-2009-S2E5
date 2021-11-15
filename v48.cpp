#include <iostream>

using namespace std;

int main() {
    int n, a[11][11];
    cin >> n;

    int nrPar = 2;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            a[i][j] = nrPar;
            nrPar += 2;
        }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
