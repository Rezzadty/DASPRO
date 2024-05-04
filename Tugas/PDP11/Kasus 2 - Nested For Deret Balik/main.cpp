#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 - Nested For Deret Balik" << endl;
    cout << " " << endl;

    int i, j;
    for (i=5;i>=1;i--){
        for (j=5;j>=i;j--){
            cout << " " << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}

