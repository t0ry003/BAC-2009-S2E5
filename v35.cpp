#include <iostream>

using namespace std;

int main() {
    int n, a[101][101];
    cin >> n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];

    int col_min[101];
    for(int j=1; j<=n; j++) {
        int valmin = a[1][j];
        for(int i=1; i<=n; i++)
            if(a[i][j] < valmin)
                valmin = a[i][j];
        col_min[j] = valmin;
    }

    for(int k=1; k<=n; k++)
        cout << col_min[k] << " ";
}
