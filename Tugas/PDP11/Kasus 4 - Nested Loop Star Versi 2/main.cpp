#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 4 - Nested Loop Star Versi 2" << endl;
    cout << " " << endl;

    int i, j;
    for (i=5;i>=1;i--){
        for (j=1;j<=i;j++){
            cout << " * " << "\t";
        }
        cout << "\n";
    }

    return 0;
}
