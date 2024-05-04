#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan PTS Kasus 2" << endl;
    cout << " " << endl;

    int angka, jam,menit, detik, konversijam, konversimenit;
    cout << "Masukan input detik : "; cin >> angka;
    konversijam= angka/3600;
    jam=angka%3600;
    konversimenit= jam/60;
    menit=jam%60;
    detik= menit%60;
    cout << angka << " detik maka jika dikonversi adalah "<< konversijam << " Jam " << konversimenit << " Menit "<< detik << " detik " << endl;

    return 0;
}
