#include <iostream>

using namespace std;

int main()
{
    //A11.2022.14201
    //A11.4105
    //Reza Aditya Prabowo
    cout << "Kasus 3 - Deret Ganjil / Genap" << endl;

    int awal, akhir, a;

 cout << "Input angka awal: ";
 cin >> awal;
 cout << "Input angka akhir: ";
 cin >> akhir;

 for (a=awal; a<=akhir; a++) {
   if (a % 2 == 0) {
     cout << a << " ";
   }
 }

 cout << endl;
 return 0;
}
