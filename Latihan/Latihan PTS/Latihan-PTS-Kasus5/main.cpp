#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan PTS Kasus 5" << endl;
    cout << " " << endl;

    int angka,hasil;
        cout << "Masukan Input Bilangan : "; cin >> angka;
    if(angka > 0){
    hasil=angka*(-1);
        cout << "Bilangan anda adalah : " << hasil << endl;
        cout << "Maaf Bilangan Yang Anda Masukan Masih Berbentuk Bilangan Negatif" << endl;
        cout << "###############################################################" << endl;
        cout << "Silahkan Masukan Bilangan Negatif : "; cin >> angka;
    hasil=angka*(-1);
        cout << "Bilangan Anda Adalah : " << hasil << endl;
        cout << "Selamat Bilangan Anda Sudah Positif." << endl;
    }

    else if (angka < 0){
    hasil=angka*(-1);
        cout << "Bilangan Anda Adalah " << hasil << endl;
        cout << "Selamat Bilangan Anda Sudah Positif. " << endl;
    }

    return 0;
}
