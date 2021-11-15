#include "iostream"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cop_n = n, nr_cif = 0;
    while(cop_n != 0){
        cop_n /= 10;
        nr_cif++;
    }

    int a[nr_cif][nr_cif];
    for(int i=1; i<=nr_cif; i++){
        int cop2_n = n;
        for(int j=1; j<=nr_cif; j++){
            a[i][j] = cop2_n%10;
            cop2_n /= 10;
        }
    }

    for(int i=1; i<=nr_cif; i++){
        for(int j=1; j<=nr_cif; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}
