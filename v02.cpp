#include "iostream"

using namespace std;

int main()
{
    int n, a[101][101], x;

    cin >> n;

    for(int i=1; i<=n; i++)
        a[i][i] = 0;

    x=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            if(i != j)
                a[j][i] = x;
        x--;
    }


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout << a[i][j] <<" ";
        cout << '\n';
    }
}
