#include <iostream>

using namespace std;

int main()
{
    cout << "PDP8 Kasus 1" << endl;
    cout << " " << endl;

    int number;
    cout << "Masukan Input Bilangan : ";cin >>  number;
    if ( number >= 10 && number <= 99 ){
        cout << " " << endl;
        cout << number << " Masuk Diantara Bilangan 10-99" << endl;
        cout << " " << endl;
        cout << number << " Merupakan Bilangan Positif " << endl;
        if (number%2==0){
            cout << " " << endl;
            cout << number << " Merupakan Bilangan Genap" << endl;
        }
        else {
            cout << " " << endl;
            cout << number << " Merupakan Bilangan Ganjil " << endl;
        }
    }
    if (number <=-10 && number >=-99){
        cout << " " << endl;
        cout << number << " Masuk Diantara Bilangan 10-99" << endl;
        cout << " " << endl;
        cout << number << " Merupakan Bilangan Negatif" << endl;
        if( number%2==0){
            cout << " " << endl;
            cout << number << " Merupakan Bilangan Genap" << endl;
        }
        else{
            cout << " " << endl;
            cout << number << " Merupakan Bilangan Ganjil" << endl;
        }
    }
    else if (number == 0){
        cout <<  " " << endl;
        cout << number << " Merupakan Bilangan nol " << endl;
    }

    return 0;
}
