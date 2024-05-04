#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 - Terbesar Dan Terkecil" << endl;
    cout << " " << endl;

    int sum, n, i, k, b;
    //sum=0;
    k=100;
    b=0;
    cout << "Input Banyak data : ";cin >> n;
    for (i=1; i<=n; i++){
        cout << " " << i << " ";
    }
    for (i=1; i<=n; i++){
        if (k > i){
            k=i;
        }
    }
        for (i=1; i<=n; i++){
        if (b < i){
            b=i;
        }
    }
    cout << endl;
    cout << "Nilai Terkecil : " << k << endl;
    cout << "Nilai Terbesar : " << b << endl;
    return 0;
}
