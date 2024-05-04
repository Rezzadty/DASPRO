#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2a - Modifikasi Kasus 2" << endl;
    cout << " " << endl;

    int sum, n, i, k, b, rata, x;
    float avg;
    sum=0;
    k=100;
    b=0;
    cout << "Input Banyak data : ";cin >> n;
    for (i=1; i<=n; i++){
        cout << "Input Bilangan ke-" << i << " : ";
        cin >> x;
        if (k > x){
            k=x;
        }
        if (b < x){
            b=x;
        }
        sum=sum+x;
    }
    cout << "Nilai Terkecil : " << k << endl;
    cout << "Nilai Terbesar : " << b << endl;
    cout << "Hasil Penjumlahan : " << sum << endl;
    avg=(float)sum/n;
    cout << "rata-rata : " << avg << endl;
    return 0;
}
