#include <iostream>

using namespace std;

int main()
{
    cout << "Reza Aditya Prabowo" << endl;
    cout << "A11.2022.14201" << endl;

    float c,f,k,r;
    cout << "masukkan suhu (celcius):"; cin>> c;
    f = ((c/5)*9)+32;
    k= c+273;
    r= (c / 5)*4;
    cout << "hasil konversi suhu dari celcius ke: " <<endl;
    cout << "Kelvin :" << k << endl;
    cout << "Farenheit :" << f << endl;
    cout << "reamur :" << r << endl;

    return 0;
}
