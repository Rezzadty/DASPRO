#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 5 - Array 0 Atau 1" << endl;
    cout << " " << endl;

    int n, x;
    cout << "Input N : "; cin >> n;
    int a[n];

    cout << "Hasil Array : ";
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            cout << 0 << " ";
        }else{
        cout << 1 << " ";
        }
    }
    cout << " " << endl;
    return 0;
}
