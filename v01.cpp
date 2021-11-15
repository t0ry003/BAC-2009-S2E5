#include "iostream"

using namespace std;

int main() {
    int n, m, a[101][101];

    cin >> n >> m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++) {
            if(i <= j)
                a[i][j] = i;
            else
                a[i][j] = j;
        }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
