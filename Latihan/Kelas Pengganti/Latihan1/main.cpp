#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan 1 " << endl;
    cout << " " << endl;

    int a, b, baris, kolom;
    cout << "Masukkan baris : "; cin >> baris;
    cout << "Masukkan Kolom : "; cin >> kolom;

    a = 1;
    while (a <= kolom){
        b=1;
        while (b<=baris){
            cout << b << " ";
            b++;
        }
        cout << endl;
        a++;
    }
    /**
    do{
        b=1;
        do{
            cout << b << " ";
            b++;
        }
    }
    **/
    return 0;
}
