#include "iostream"

using namespace std;

int main() {
    int n, a[101][101];

    cin >> n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            int u_Cif = (i*j)%10;
            a[i][j] = u_Cif;
        }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
