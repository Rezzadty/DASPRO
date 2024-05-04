#include <iostream>

using namespace std;

int main()
{
    //A11.2022.14201
    //A11.4105
    //Reza Aditya Prabowo
    cout << "Kasus 2 - Bilangan Terkecil / Terbesar" << endl;

    int a,b,c,d;
    float average,sum;

    a = 100;
    b = 0;
    sum = 0;

    cout << "Input Banyak Data : "; cin >> d;

    for(b=1;b<=d;b++){
        cout << b << " ";

    }
    cout << endl;
    for(b=1;b<=d;b++){
        if(a > b){
            a=b;
        }
    }
    cout << endl;
    for(b=1;b<=d;b++){;
        if(c < b){
            c=b;
        }

    }
    cout << "Nilai Terkecil : " << a << endl;
    cout << "Nilai Terbesar : " << c << endl;

    return 0;
}
