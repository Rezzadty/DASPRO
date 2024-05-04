#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 4 - Array Bilangan Genap Atau Ganjil" << endl;
    cout << " " << endl;

    int i, j, n;
    cout << "Input N : "; cin >> n;

    int nilai[n];
    for(i=0; i<n; i++){
        cout << "Input Ke- " << i+1 << " : "; cin >> nilai[i];
    }

    cout << "Hasil array Genap : ";
    for(int i=0; i<n; i++){
        if(nilai[i]%2==0){
            cout << nilai[i] << endl;
        }
    }

    cout << "Hasil array Ganjil : ";
    for(int j=0; j<n; j++ ){
        if(nilai[j]%2!=0){
            cout << nilai[j] << endl;
        }
    }
    cout << "\n================================\n";
    return 0;
}
