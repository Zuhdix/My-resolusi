#include <iostream>
using namespace std;

int main()
{
	// increment dan decrement
	// preincrement dan postincrement

	int a = 5;
	int b = 5;

	// postincrement
	// dinamakan postkarena ++ setelah a dan berlaku sebaliknya (preincrement)
	cout << a << endl;
	cout << a++ << endl; // (a + 1) , print a kemudian tambahkan dengan 1 ( 5 + 1) proses ketiga
	cout << a << endl << endl;

	// preincrement
	cout << b << endl;
	cout << ++b << endl; // tambah 1 kemudian print ( 1 + 5 = 6) langsung
	cout << b << endl;



	cin.get();
	return 0;
}
