#include <iostream>
using namespace std;

int main()
{
    // Program ini menghitung dan menampilkan deret Fibonacci hingga nilai ke-n
    // Deret Fibonacci: setiap angka adalah jumlah dari dua angka sebelumnya (f_n = f_n1 + f_n2)
    
    // Deklarasi variabel untuk perhitungan Fibonacci
    int n;                  // Menyimpan batas deret yang diinginkan pengguna
    int f_n;                // Menyimpan nilai Fibonacci saat ini (f_n)
    int f_n1;               // Menyimpan nilai Fibonacci sebelumnya (f_{n-1})
    int f_n2;               // Menyimpan nilai Fibonacci dua langkah sebelumnya (f_{n-2})
    
    // Menampilkan judul program dan meminta input
    cout << "Program Deret Fibonaci \n";
    cout << "Masukan nilai ke-n: ";
    cin >> n;               // Membaca input pengguna untuk batas deret
    
    // Inisialisasi nilai awal deret Fibonacci
    f_n1 = 1;               // Nilai pertama deret = 1
    f_n2 = 0;               // Nilai sebelumnya deret = 0
    
    // Menampilkan dua nilai awal deret
    cout << f_n2 << " ";    // Menampilkan nilai awal 0
    cout << f_n1 << " ";    // Menampilkan nilai awal 1
    
    // Loop untuk menghitung dan menampilkan nilai-nilai Fibonacci berikutnya
    for(int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;  // Menghitung nilai Fibonacci berikutnya (rumus: f_n = f_n1 + f_n2)
        f_n2 = f_n1;        // Memperbarui nilai f_n2 menjadi f_n1 (untuk iterasi berikutnya)
        f_n1 = f_n;         // Memperbarui nilai f_n1 menjadi f_n (untuk iterasi berikutnya)
        cout << f_n << " "; // Menampilkan nilai Fibonacci yang baru dihitung
    }
    
    // Menampilkan baris baru dan menahan layar konsol
    cout << "\n";
    cin.get();              // Menahan layar konsol agar tetap terbuka hingga pengguna menekan Enter
    
    return 0;               // Mengakhiri program dengan kode sukses
}
