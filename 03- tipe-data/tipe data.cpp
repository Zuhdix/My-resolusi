#include <iostream>

using namespace std;

int main(){

	// bilangan bulat
	unsigned int a = 5; // 32-bit >> unsigned digunakan untuk tidak bertanda >> tapi nilai int nya 0 sampai max biasa X2
	long b = 6;	// >> setiap tipe data memiliki max limit
	short c = 7;

	// bilangan decimal
	float d = 1.0;
	double e = 2.5;

	// character
	char f = 'a'; //character 1-bit

	// boolean
	bool g = true; // true/false

	cout << a << endl;
	cout << sizeof(a) << " byte" << endl; // digunakan untuk melihat berapa byte tipe data tertentu, misal int 4 byte x 8 = 32
	cout << numeric_limits<unsigned int>::max() << endl; // ini adalah cara untuk melihat max dari tipe data tertentu 
	cout << numeric_limits<unsigned int>::min() << endl;
	cin.get();
	return 0;
}
