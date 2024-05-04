#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan Etline" << endl;
    cout << " " << endl;

    int i;
    int id[2];
    string nama [2];
    int nilai[2];

    for (i=0;i<2;i++){
        cout << "ID : "; cin >> id[i];
        cout << "Nama : ";
        getline(cin >> ws , nama[i]);
        cout << "Masukan Nilai : "; cin >> nilai[i];
    }
    cout << "ID" << "\t||\t" << "Nama" << "\t||\t" << "Nilai" << endl;
    cout << "===============================" << endl;
    for (i=0;i<2;i++){
        cout << id[i] << "\t||\t" << id[i] << "\t||\t" << nilai[i];
    }


    return 0;
}
