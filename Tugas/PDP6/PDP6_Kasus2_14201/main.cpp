#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 Must Be 10" << endl;
    cout << "" << endl;

    int angka, bilangan, adder;
    cout << "Input bilangan : "; cin >> bilangan;

    if(angka < 10){
        adder = 10-(bilangan);
        bilangan = adder + angka;
            cout << "Bilangan anda kurang dari 10" << endl;
            cout << "Untuk menjadi 10, maka program harus ditambahkan " << adder << endl;
            cout << "Silahkan Masukan Angka :";cin >> adder;
            cout << "Bilangan Anda :" << bilangan << endl;
            cout << "Selamat, Program Anda Telah Menampilkan Bilangan 10 !!!";
    }
    else if (angka >10){
        adder=-(angka-10);
        bilangan = adder + angka;
            cout << "bilangan anda lebih dari 10" << endl;
            cout << "Untuk Menjadi 10, maka program harus dikurangkan" << adder << endl;
            cout << "Silahkan Masukan Angka :"; cin >> adder;
            cout << "bilangan Anda :" << bilangan << endl;
            cout << "Selamat, Program Anda Telah Menampilkan Bilangan 10";
    }
    return 0;
}
