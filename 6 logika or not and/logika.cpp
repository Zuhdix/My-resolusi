#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 4;

    bool hasil;

    // not
    // hasil = !(a == 5);

    // and
    cout << " untuk and \n";
    hasil = (a == 2 ) and (b == 4);
    cout << hasil << endl;
    hasil = (a == 3 ) and (b == 4);
    cout << hasil << endl;
    hasil = (a == 2 ) &&  (b == 3);
    cout << hasil << endl;
    hasil = (a == 1 ) &&  (b == 5);
    cout << hasil << endl;

    // or
    cout << " untuk or \n";
    hasil = (a == 2 ) or (b == 4);
    cout << hasil << endl;
    hasil = (a == 3 ) or (b == 5);
    cout << hasil << endl;
    hasil = (a == 1 ) or (b == 6);
    cout << hasil << endl;
    hasil = (a == 2 ) and (b == 4);
    cout << hasil << endl;

    cin.get();
    return 0;
}
