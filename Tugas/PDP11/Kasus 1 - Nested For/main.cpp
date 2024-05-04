#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1 - Nested For" << endl;
    cout << " " << endl;

    int i, j;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            cout << " " << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}

