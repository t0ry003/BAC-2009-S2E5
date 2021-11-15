#include "iostream"

using namespace std;

int main() {
    int n, p, a[101][101], k=0;

    cin >> n >> p;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=p; j++) {
            a[i][j] = k*k;
            k+=2;
        }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=p; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
