#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    for(int i=1; i<=n; i++)
        if(i % 2 == 1)
            for(int j=1; j<=n; j++)
                a[i][j] = i+j;
        else {
            a[i][1] = i;
            for(int j=2; j<=n; j++)
                a[i][j] = a[i-1][j-1];
        }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
