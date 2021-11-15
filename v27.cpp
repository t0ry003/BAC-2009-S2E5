#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[101][101];
    for(int i=1; i<=n; i++){
        a[i][1] = 1;
        a[i][n] = 1;
    }
    for(int j=1; j<=n; j++)
        a[1][j] = 1;

    for(int i=2; i<=n; i++)
        for(int j=2; j<=n-1; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
        }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
