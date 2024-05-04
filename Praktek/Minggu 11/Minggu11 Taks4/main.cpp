#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan 3 " << endl;
    cout << " " << endl;

    int i, j, n;
    n=1;
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            n=n+2;
            cout << " " << n << "\t";
        }
        cout << "\n";
    }

    return 0;
}
