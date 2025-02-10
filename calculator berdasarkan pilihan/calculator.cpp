#include <iostream>
using namespace std;

int main() {
    float a = 500;
    float b = 800;
    float c = 1500;
    float x, hasil;
    char aritmatika;
    int pilihan;

    cout << "Program calculator \n\n";

    // Menampilkan pilihan angka
    cout << "Pilihan angka: \n";
    cout << "1. a = " << a << endl;
    cout << "2. b = " << b << endl;
    cout << "3. c = " << c << endl;

    cout << "Pilih angka yang ingin dihitung (1/2/3): ";
    cin >> pilihan;

    // Meminta input operator
    cout << "Pilih operatornya +, -, /, *: ";
    cin >> aritmatika;

    // Meminta input jumlah pesanan
    cout << "Masukkan jumlah pesanan: ";
    cin >> x;

    // Melakukan perhitungan sesuai dengan pilihan dan operator yang dimasukkan
    switch (pilihan) {
        case 1:
            cout << "\nHasil perhitungan untuk a = " << a << aritmatika << x << " adalah: ";
            switch (aritmatika) {
                case '+': hasil = a + x; break;
                case '-': hasil = a - x; break;
                case '/': hasil = a / x; break;
                case '*': hasil = a * x; break;
                default: cout << "Operator tidak valid!" << endl; return 0;
            }
            break;
        case 2:
            cout << "\nHasil perhitungan untuk b = " << b << aritmatika << x << " adalah: ";
            switch (aritmatika) {
                case '+': hasil = b + x; break;
                case '-': hasil = b - x; break;
                case '/': hasil = b / x; break;
                case '*': hasil = b * x; break;
                default: cout << "Operator tidak valid!" << endl; return 0;
            }
            break;
        case 3:
            cout << "\nHasil perhitungan untuk c = " << c << aritmatika << x << " adalah: ";
            switch (aritmatika) {
                case '+': hasil = c + x; break;
                case '-': hasil = c - x; break;
                case '/': hasil = c / x; break;
                case '*': hasil = c * x; break;
                default: cout << "Operator tidak valid!" << endl; return 0;
            }
            break;
        default:
            cout << "Pilihan angka tidak valid!" << endl;
            return 0;
    }

    // Menampilkan hasil perhitungan
    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}
