#include <iostream>

using namespace std;

int main()
{
    cout << "Mehta Pradnyatama" << endl;
    cout << "A11.2022.14183" << endl;
    cout << "A11.4105" << endl;
    cout << "======================================" << endl;

    int awal, akhir, i;

 cout << "Input angka awal: ";
 cin >> awal;
 cout << "Input angka akhir: ";
 cin >> akhir;

 for (i=awal; i<=akhir; i++) {
   if (i % 2 == 0) {
     cout << i << " ";
   }
 }

 cout << endl;
 return 0;
}
