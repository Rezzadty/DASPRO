#include <iostream>

using namespace std;

int main()
{
    //Reza Aditya Prabowo
    //A11.2022.14201
    //A11.4105

    cout << "Kasus 1 - Deret Factorial" << endl;
    cout << " " << endl;
    int x;
    int result = 1;
    cout << "Input Bilangan : "; cin >> x;
    while (x<=0){
        cout << "Angka yang dimasukkan bukan bilangan bulat atau adalah angka 0 " << endl;
    }
    for (int i = 1; i <= x; i++){
        result *=i;
    }
    cout << "Hasil faktorial " << x << " adalah : " << result << endl;
    return 0;
}
