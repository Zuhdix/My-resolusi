#include <iostream>
using namespace std;

int main() {
    // menjumlahkan total uang belanja
    int wortel;
    int bayem;
    int pisang;
    float total_harga;

    // input total uang dari user
    cout << "Harga wortel : ";
    cin >> wortel;

    cout << "Harga bayem : ";
    cin >> bayem;

    cout << "Harga pisang : ";
    cin >> pisang;

    // menghitung rata rata pengeluaran uang
    total_harga = (wortel + bayem + pisang);

    // menampilkan hasil
    cout << "wortelnya: " << wortel << endl;
    cout << "bayem: " << bayem << endl;
    cout << "pisang: " << pisang << endl;
    cout << "total harga: " << total_harga << endl;

}
