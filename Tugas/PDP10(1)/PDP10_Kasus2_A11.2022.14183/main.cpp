#include <iostream>

using namespace std;

int main()
{
    cout << "Mehta Pradnyatama" << endl;
    cout << "A11.2022.14183" << endl;
    cout << "A11.4105" << endl;
    cout << "======================================" << endl;

    int k,i,b,n;
    float average,sum;

    k = 100;
    b = 0;
    sum = 0;

    cout << "Input Banyak Data : "; cin >> n;

    for(i=1;i<=n;i++){
        cout << i << " ";

    }
    cout << endl;
    for(i=1;i<=n;i++){
        if(k > i){
            k=i;
        }
    }
    cout << endl;
    for(i=1;i<=n;i++){;
        if(b < i){
            b=i;
        }

    }
    cout << "Nilai Terkecil ; " << k << endl;
    cout << "Nilai Terbesar : " << b << endl;

    return 0;
}
