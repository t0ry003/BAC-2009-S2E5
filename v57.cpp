#include <iostream>

using namespace std;

int main() {
    int n, a, b, m[26][26];
    cin >> n >> a >> b;

//    linia a si coloana b
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == a || j == b)
                m[i][j] = 0;

//      sus(a) stanga(b)
    for (int i = 1; i < a; i++)
        for (int j = 1; j < b; j++)
            m[i][j] = 1;

//      sus(a) dreapta(b)
    for (int i = 1; i < a; i++)
        for (int j = b + 1; j <= n; j++)
            m[i][j] = 2;

//      sub(a) stanga(b)
    for (int i = a + 1; i <= n; i++)
        for (int j = 1; j < b; j++)
            m[i][j] = 3;

//      sub(a) dreapta(b)
    for (int i = a + 1; i <= n; i++)
        for (int j = b + 1; j <= n; j++)
            m[i][j] = 4;

//      afisare
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
}
