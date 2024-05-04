#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 5 - Tabel Perkalian" << endl;
    cout << " " << endl;
    int x,y;
    cout << "Masukkan input panjang: "; cin >> x;
    cout << "Masukkan input lebar: "; cin >> y;
        for (int i=1;i<=x; i++){

        for (int j=1; j<=y;j++){

            cout << j*i << " \t";
        }
        cout << endl;
    }
    return 0;
}
