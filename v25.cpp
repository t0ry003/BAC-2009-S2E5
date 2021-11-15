#include "iostream"
#include "fstream"

using namespace std;

int main() {
    int m, n, a[101][101];
    ifstream f("numere.txt");
    f >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    int prod_max[101];
    for (int j = 1; j <= n; j++) {
        int prod_col = 1;
        for (int i = 1; i <= m; i++)
            prod_col *= a[i][j];
        prod_max[j] = prod_col;
    }

    int maxim = prod_max[1];
    for (int k = 1; k <= n; k++) {
        if (prod_max[k] > maxim)
            maxim = prod_max[k];
    }

    for (int k = 1; k <= n; k++)
        if (prod_max[k] == maxim)
            cout << k << " ";
}
