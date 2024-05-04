#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 - Array Terbalik " << endl;
    cout << " " << endl;

    int n,j;
    int Nilai [10];
    cout << "Input Nilai N : "; cin >> n;

    for (j=0;j<n;j++){
        cout << "Masukkan nilai ke-" << j+1 <<" = ";cin >> Nilai[j];
    }
    cout << " " << endl;
    cout << "Hasil Array : ";
    for (j=0;j<n;j++){
        cout << Nilai [j] << " ";
    }
    cout << " " << endl;
    cout << "Reverse Array : ";
      for ( j =n-1; j>=0; j--){
        cout << Nilai [j] << " ";
      }
    return 0;
}
