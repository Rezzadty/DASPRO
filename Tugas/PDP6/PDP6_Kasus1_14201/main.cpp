#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1 - Program Konversi Nilai" << endl;
    cout << "" << endl;

    int Nilai;
        cout << "Masukan Nilai Siswa : "; cin >> Nilai;
    if (Nilai >= 85 && Nilai < 100){
        cout << "Hasil Nilai Huruf Anda Adalah : A" << endl;
    }
    else if (Nilai >= 80 && Nilai < 85){
        cout << "Hasil Nilai Huruf Anda Adalah : AB" << endl;
    }
    else if (Nilai >= 70 && Nilai < 80){
        cout << "Hasil Nilai Huruf Anda Adalah : B" << endl;
    }
    else if (Nilai >= 65 && Nilai < 70){
        cout << "Hasil Nilai Huruf Anda Adalah : BC" << endl;
    }
    else if (Nilai >= 60 && Nilai < 65){
        cout << "Hasil Nilai Huruf Anda Adalah : C" << endl;
    }
    else if (Nilai >= 50 && Nilai < 60){
        cout << "Hasil Nilai Huruf Anda Adalah : D" << endl;
    }
    else{
        cout << "Hasil Nilai Huruf Anda Adalah : E" << endl;
    }
    return 0;
}
