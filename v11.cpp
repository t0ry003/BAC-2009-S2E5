#include "iostream"

using namespace std;

int main()
{
    int m, n, a[101][101], min_linie[101], c_mL = 1;

    cin >> m >> n;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];

    for(int i=1; i<=m; i++){
        int val_Min = a[i][1];
        for(int j=2; j<=n; j++)
            if(a[i][j] < val_Min)
                val_Min = a[i][j];
        min_linie[i] = val_Min;
    }

    int valMax = min_linie[1];
    for(int k=2; k<=m; k++){
        if(min_linie[k] > valMax)
            valMax = min_linie[k];
    }

    cout << valMax;
}
