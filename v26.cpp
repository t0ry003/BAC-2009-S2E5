#include "iostream"

using namespace std;

int main() {
    int a[101][101], n, p, ok;
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];

    for(int j=1; j<=n; j++) {
        for(int i=1; i<=n; i++) {
            p = 1;
            for(int k=1; k<=n; k++)
                if(k != i)
                    p = p * a[k][j];

            if(a[i][j] == p) {
                cout << a[i][j] << " ";
                ok = 1;
            }
        }
    }
    if(ok == 0)
        cout << "NU EXISTA";
}
