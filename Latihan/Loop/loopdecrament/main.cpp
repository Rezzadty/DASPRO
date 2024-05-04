#include <iostream>

using namespace std;

int main()
{
    cout << "Uji Test Loop" << endl;
    cout << " " << endl;

    int i, b;
    cout << "Input bilangan : "; cin >> b;
    for (i=b; i>=1; i--){
        cout << i <<  ". Hello World" << endl;
    }
    return 0;
}
