#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan PTS Kasus 3" << endl;
    cout << " " << endl;

    int konversiangka,angka1,angka2,angka3,angka4;
    cout << "Input Angka : ";cin >> angka1;
    cout << "Input angka modulo : "; cin >> angka2;
    konversiangka = angka1/angka2;
    angka3 = konversiangka;
    angka4 = angka1%angka2;
    cout << angka1 << " mod " << angka2 << ", maka hasil bagi " << angka3 << " dan sisa hasil bagi " << angka4 << endl;

    return 0;
}
