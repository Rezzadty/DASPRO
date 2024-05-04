#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 3 - Terbesar, Terkecil, Jumlah, Rata-Rata" << endl;
    cout << " " << endl;

    int n, x, besar, kecil, total, average;
    cout << "Input N : "; cin >> n;
    int a[n];
    besar =-1000000;
    kecil = 1000000;
    total = 0;
    average = 0;

    for(int i = 0; i<n; i++){
        cout << "Input ke-" << i+1 << " : ";cin >> x;
        a[i] = x;
        if(x>besar){
            besar = x;
        }
        if(x<kecil){
            kecil = x;
        }
        total += x;
    }

    cout << "Hasil Array : ";
    for (int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    average = (float)total/n;

    cout << "Nilai Terbesar : " << besar << endl;
    cout << "Nilai Terkecil : " << kecil << endl;
    cout << "Jumlah Array : " << total << endl;
    cout << "Rata - Rata : " << average << endl;
    return 0;
}
