#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            if(i % 2 == 1)
                a[i][j] = i;
            else
                a[i][j] = j;
        }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
