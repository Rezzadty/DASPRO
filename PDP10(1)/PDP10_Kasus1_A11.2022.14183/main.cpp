#include <iostream>

using namespace std;

int main()
{
    int i,n,hasil;

        cout << "Input Angka : "; cin >> n;
    hasil = 1;
    for(i=1;i<=n;i++){
    hasil=hasil*i;
    }
        cout << "Hasil Faktorial " << n << " adalah " << hasil << endl;

    return 0;
}
