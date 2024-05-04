#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 3" << endl;
    cout << " " << endl;

    int x,y;
        cout << "Input Angka [ Masukan angka 0 atau -1 ] : ";
        cin >> x;
    while(x!=0 && x!=-1){
        cout << "Input Angka [ Masukan angka 0 atau -1 ] : ";
        cin >> x;
    }
    cout << " " << endl;
    cout << "Selamat Hasilnya : " << x << endl;

    return 0;
}
