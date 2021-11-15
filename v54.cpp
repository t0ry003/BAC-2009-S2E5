#include <iostream>

using namespace std;

int main() {
    int n, x, V[11][11];
    cin >> n >> x;

//    prelucarea cifrelor lui x (de forma 'abc')
    int a = x / 100 % 10;
    int b = x / 10 % 10;
    int c = x % 10;

//    crearea matricei
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (i == j)
                V[i][j] = a;
            else if (j == n - i + 1)
                V[i][j] = c;
            else
                V[i][j] = b;
        }

//    afisarea matricei
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << V[i][j] << " ";
        cout << "\n";
    }
}
