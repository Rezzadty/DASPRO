#include <iostream>

using namespace std;

int main()
{
    cout << "Test Kasus 4" << endl;
    cout << "" << endl;

    int jam,upah,gaji;
    cout << "Jam Kerja : "; cin >> jam ;
    cout << "Upah Kerja : "; cin >> upah;

    gaji= jam*upah;
    cout << "Gaji Reguler : " << gaji << endl;

    int overpay;
    if (jam > 30){
        overpay = (jam-30)*(upah*0.4);
        cout << "Upah lembur : " << overpay << endl;
    }
    else{
        overpay =upah*0.2;
        cout << "Upah Lembur : " << overpay << endl;
    }
    int total;
    total = gaji + overpay;
    cout << "total upah lembur = " << total << endl;
    return 0;
}
