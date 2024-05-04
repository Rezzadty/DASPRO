#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 3 - Great Sale" << endl;
    cout << "" << endl;

// harga barang = H_a, diskon = d, jumlah_barang = j_b, total harga = t_h,//
// total diskon = t_d, harga_asli = h_a//

    int h_b,d,j_b,t_h,t_d,h_a;
    cout << "Masukkan jumlah barang yang anda akan beli : "; cin >>j_b;
    cout << "Masukan harga barang : "; cin >> h_b;

    if (j_b>= 3 && j_b <= 5){
        cout << "Anda mendapatkan potongan diskon sebesar 2%" << endl;
        h_a = h_b * j_b;
        t_d = h_b * j_b * 0.02;
        t_h = h_a - t_d;
        cout << "Total harga yang anda bayar adalah : " << t_h << endl;
    }

    else if (j_b >= 6 && j_b <= 10){
        cout << "Anda mendapatkan potongan diskon sebesar 5%" << endl;
        h_a = h_b * j_b;
        t_d = h_b * j_b * 0.05;
        t_h = h_a - t_d;
        cout << "Total harga yang anda bayar adalah : " << t_h << endl;
    }

        else if (j_b >= 11 && j_b <= 17){
        cout << "Anda mendapatkan potongan diskon sebesar 10%" << endl;
        h_a = h_b * j_b;
        t_d = h_b * j_b * 0.1;
        t_h = h_a - t_d;
        cout << "Total harga yang anda bayar adalah : " << t_h << endl;
    }

        else if (j_b >= 18){
        cout << "Anda mendapatkan potongan diskon sebesar 20%" << endl;
        h_a = h_b * j_b;
        t_d = h_b * j_b *0.2;
        t_h = h_a - t_d;
        cout << "Total harga yang anda bayar adalah : " << t_h << endl;
    }

        else {
            cout << "Maaf anda tidak mendapatkan diskon" << endl;
            h_a = h_b * j_b;
            cout << "Total harga yang harus anda bayarkan adalah : " << h_a << endl;
        }

    return 0;
}
