#include <iostream>

using namespace std;

int main()
{
    cout << "Minggu 11 - Latihan " << endl;
    cout << " " << endl;

    int i,j,n;
    n=0;
    //outer loop Kalau mau mengubah jumlah deret ke bawah
    for (i=1;i<=5;i++){
        //inner loop untunk jumlah yang kekanan
        for (j=1;j<=5;j++){
            n=n+1;
            cout << " " << n << "\t";
        }
        cout << "\n";
    }
    return 0;
}
