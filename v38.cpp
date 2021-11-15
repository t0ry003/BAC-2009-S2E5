#include <iostream>

using namespace std;

int main() {
    int n, a[31][31];
    cin >> n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];

    // determinarea val minime pe coloane
    int minCol[31];
    for(int j=1; j<=n; j++) {
        int valMin = a[1][j];
        for(int i=1; i<=n; i++)
            if(a[i][j] < valMin)
                valMin = a[i][j];
        minCol[j] = valMin;
    }

    // determinarea prod val care sunt minime pe col de pe diag sec
    int prod = 1, ok = 0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(j == n-i+1 && a[i][j] == minCol[j]) {
                prod *= a[i][j];
                ok = 1;
            }

    if(ok != 0)
        cout << prod%10;
    else
        cout << "NU EXISTA";
}
