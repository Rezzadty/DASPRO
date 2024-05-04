#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 3 - Nested Loop Star" << endl;
    cout << " " << endl;

    int i, j;
    for (i=5;i>=1;i--){
        for (j=5;j>=i;j--){
            cout << " * " << "\t";
        }
        cout << "\n";
    }

    return 0;
}
