#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1 - Array " << endl;
    cout << " " << endl;

    int n,j;
    int nilai [10];
    cout << "Input Nilai N : "; cin >> n;

    for (j=0;j<n;j++){
        cout << "Masukkan nilai ke-" << j+1 <<" = ";cin >> nilai[j];
    }
    cout << " " << endl;
    cout << "Hasil Array : ";
    for (j=0;j<n;j++){
        cout << nilai [j] << " ";
    }
    return 0;
}
