#include <iostream>
using namespace std;

int main () {
    int a;

    cout << "masukkan angkanya = ";
    cin >> a;

    if (a == 7) {
        cout << "angka ini 7" << endl;
    } else if (a == 16) {
        cout << "angka ini 16" << endl;
    } else if (a == 72) {
        cout << "angka ini 72" << endl;
    } else {
        cout << "Keluar dari statement" << endl;
    }



    cin.get();
    return 0;
}
