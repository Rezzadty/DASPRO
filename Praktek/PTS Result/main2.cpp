#include <iostream>

using namespace std;

int main()
{
    cout << "kasus 2" << endl;
    cout << "*** TOKO KOMPUTER BABA SLAMET ***" << endl;
    cout << "=================================" << endl;
    cout << "Promo Bulan Oktober" << endl;
    cout << " " << endl;
    cout << "- Printer Tipe 1 -" << endl;
    cout << "Harga: 3. 500. 000" << endl;
    cout << "Pembelian setiap tanggal genap, disc 20%" << endl;
    cout << " " << endl;
    cout << "- Printer Tipe 2 -" << endl;
    cout << "Harga: 4. 500. 000" << endl;
    cout << "Pembelian tanggal 2 disc 10%" << endl;
    cout << "Selain Tanggal 2 disc. 5%" << endl;
    cout << " " << endl;
    cout << "- Printer Tipe 3 -" << endl;
    cout << "Harga: 5. 000. 000" << endl;
    cout << "Pembelian tanggal ganjil, disc 15%" << endl;
    cout << " " << endl;
    cout << "- Printer Tipe 4 - " << endl;
    cout << "Harga: 7. 500. 000" << endl;
    cout << "Pembelian tanggal kelipatan 5, disc.10%" << endl;
    cout << "=================================" << endl;

    int tanggal,tipe,diskon,total, genap, harga1, harga2, harga3,
        harga4, diskon1, diskon2, diskon3, diskon4, diskon5, th1, th2, th3, th4, th5;
        cout << "Masukan tanggal beli : "; cin >> tanggal;
        cout << "Masukan tipe printer [1,2,3,4] : "; cin >> tipe;
    cout << "=================================" << endl;

    harga1 = 3500000;
    harga2 = 4500000;
    harga3 = 5000000;
    harga4 = 7500000;
    diskon1 = 0,2;
    diskon2 = 0,1;
    diskon3 = 0,5;
    diskon4 = 1,5;
    diskon5 = 1,0;
    genap = tanggal/2;
    th1= harga1*diskon1;
    th2 = harga2 * diskon2;
    th3 = harga2 * diskon3;
    th4 = harga3 * diskon4;
    th5 = harga4 * diskon5;

        switch(tipe){
            case 1:cout << "Tanggal Beli : " << tanggal << endl;
                    cout << "Tipe Printer : " << tipe << endl;
                    if(tipe>=1)
                    cout << "Diskon       : " << diskon1 << endl;
                    total= harga1-th1;
                    cout << "Total harga  : " << total << endl;
                break;
            case 2: cout << "Tanggal Beli : " << tanggal << endl;
                    cout << "Tipe Printer : " << tipe << endl;
                    if(tipe>=2)
                    cout << "Diskon       : " << diskon2 << endl;
                    total= harga2-th2;
                    cout << "Total harga  : " << total << endl;
                break;
            case 3: cout << "Tanggal Beli : " << tanggal << endl;
                    cout << "Tipe Printer : " << tipe << endl;
                    if(tipe>=3)
                    cout << "Diskon       : " << diskon4 << endl;
                    total = harga3-th4;
                    cout << "Total harga  : " << total << endl;
                break;
            case 4: cout << "Tanggal Beli : " << tanggal << endl;
                    cout << "Tipe Printer : " << tipe << endl;
                    if(tipe>=4)
                    cout << "Diskon       : " << diskon5 << endl;
                    total= harga4-th5;
                    cout << "Total harga  : " << total << endl;
        default : cout << "Silahkan Masukan Tipe Printer Yang Benar : "; cin >> tanggal;
        }

    return 0;
}
