#include <iostream>

using namespace std;

int main()
{
    cout << " Kasus 3 - Modifikasi deret"
    int i,n,ganti;

    cout << "Input Banyak Data : "; cin >> n;

    for(i=1;i<=n;i++){
        ganti = i;
        if(i==2){
            ganti=i*i;
        }
        cout << ganti << " ";
    }

    return 0;
}
