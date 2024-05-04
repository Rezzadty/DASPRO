#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan 1 " << endl;
    cout << " " << endl;

    int i, j, n;
    n=26;
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            n=n-1;
            cout << " " << n << "\t";
        }
        cout << "\n";
    }

    return 0;
}
