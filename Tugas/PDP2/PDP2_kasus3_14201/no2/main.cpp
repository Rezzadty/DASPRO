#include <iostream>

using namespace std;

int main()
{
    cout << "Reza Aditya Prabowo" << endl;
    cout << "A11.2022.14201" << endl;

    int a, b, c, x, y;

    cout << " input a : "; cin >> a;
    cout << " input b : "; cin >> b;
    cout << " input c : "; cin >> c;
    cout << " input x : "; cin >> x;

    y= (a * (x * x)) + (b*x) + c;

    cout << "y = ax2 + bx + c " << endl;
    cout << "y = " << y << endl;

    return 0;
}
