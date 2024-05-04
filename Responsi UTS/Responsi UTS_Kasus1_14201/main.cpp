#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1 - Array Tipe Interger" << endl;
    cout << " " << endl;

    int a, hasil=0;
    int b[]={3,4,2,1,5};

    cout << "A = {3, 4, 2, 1, 5}" << endl;
    cout << "BIlangan Genap : ";
        for (a=0;a<5;a++){
            if(b[a]%2==0){
                hasil += b[a];
                cout << b[a] << " ";
            }
        }
        cout << "\n";
        cout << "Hasil penjumlahan bilangan genap : " << hasil << endl;






    return 0;
}
