#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1a - Penjumlahan Deret Versi 2" << endl;
    cout << " " << endl;

    int sum, x, n, m;
    sum=0;
    cout << "Input banyak data : "; cin >> n;
    for (x=1; x<=n; x++){
        cout << "Input Bilangan Ke " << x << " : ";
        cin >>m ;
        sum=sum+m;
    }
    cout << " " << endl;
    cout << "Total Hasil : " << sum << endl;

    return 0;
}
