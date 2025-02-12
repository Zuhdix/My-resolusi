#include<iostream>
using namespace std;

int main() {
    int a = 8;

    cout << "nilai awal dari a: " << a << endl;

    // assignment
    // variabel = variabel operator expresi
    //     a    =     a        +    3

    // assignment operator
    // variabel operator = expresi
    //     a        +    =    3

    a +=2;
    cout << "ditambahkan 2: " << a << endl;

    a -=2;
    cout << "dikurangi 2: " << a << endl;

    a *=2;
    cout << "dikali 2: " << a << endl;

    a /=2;
    cout << "dibagi 2: " << a << endl;

    a %=2;
    cout << "dimodulus 2: " << a << endl;

    // angkanya tidak berdiri sendiri karena di eksekusi dari atas kebawah


    cin.get();
    return 0;
}
