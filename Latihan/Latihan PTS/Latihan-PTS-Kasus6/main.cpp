#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan PTS Kasus 6" << endl;
    cout << " " << endl;

    int bilangan;
    int satuan,puluhan,ratusan,hasil;

    cout << "Program Membalik Bilangan" << endl;
    cout << "Input bilangan 3 digit yang akan dibalik : "; cin >> bilangan;

    satuan = bilangan % 10;
    puluhan = ((bilangan-satuan)%100)/10;
    ratusan = (bilangan-((puluhan*10)+satuan))/100;
    hasil = (satuan*100)+(10*puluhan)+ratusan;

    cout << "Setelah dibalik maka hasilnya adalah " << hasil << endl;
    return 0;
}
