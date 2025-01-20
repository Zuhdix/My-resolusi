#include <iostream>

using namespace std;

int main(){

	int a = 6; // salah satu variabel harus menggunakan float untuk menampilkan koma contoh 6 jadi float
	int b = 4;
	int hasil; // hasil juga harus dirubah ke float agar muncul komanya, karena hasil adalah tahap akhir sebuah operasi aritmatika
	// operatornya +, -, *, /, %
	// penjumlahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;

	// pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	// perkalian
	hasil = a * b;
	cout << a << " x " << b << " = " << hasil << endl;

	// pembagian
	hasil = a / b;
	cout << a << " / " << b << " = " << hasil << endl;

	// modulus
	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;

	// urutan eksekusi;

	hasil = a + b * a;
	cout << hasil << endl; 

	cin.get();
	return 0;
}
