#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 - Interger Positif dan Negatif" << endl;
    cout << " " << endl;

    int a,b;
    int nilai[10];
    cout << "Masukan ukuran larik : "; cin >> a;

    for(b=0;b<a;b++){
        cout << "Input elemen-" << b+1 << " = ";cin >> nilai[b];
    }
    cout << " " << endl;
    cout << "Larik Utama : ";
        for(b=0;b<a;b++){
            cout << nilai[b] << " ";
        }
    cout << endl;
    cout << "Larik Genap : ";
    for(int a=0;a<b;a++){
        if(nilai[a]%2==0){
            cout << nilai[a] << " ";
        }
    }
    cout << endl;
    cout << "Larik Ganjil : ";
    for (int b=0;b<a;b++){
        if(nilai[b]%2!=0){
            cout << nilai[b] << " ";
        }
    }

    return 0;
}
