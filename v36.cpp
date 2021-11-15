#include <iostream>

using namespace std;

int main() {
    int n, m, a[31][31];
    cin >> n >> m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> a[i][j];

    int col_Min[31];
    for(int j=1; j<=m; j++) {
        int valMin = a[1][j];
        for(int i=2; i<=n; i++)
            if(a[i][j] < valMin)
                valMin = a[i][j];
        col_Min[j] = valMin;
    }

    for(int k=m; k>=1; k--)
        cout << col_Min[k] << " ";

}
