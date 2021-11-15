#include <iostream>

using namespace std;

int main() {
    int n, a[101][101];
    cin >> n;

    int nr = 0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            int ok = 0;
            while(ok == 0) {
                if(nr % 3 != 0) {
                    a[i][j] = nr;
                    ok = 1;
                }
                nr += 2;
            }
        }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
