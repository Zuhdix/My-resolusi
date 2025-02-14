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
	cout << a++ << endl; // (a + 1)
	cout << a << endl << endl;

	// preincrement
	cout << b << endl;
	cout << ++b << endl;
	cout << b << endl;



	cin.get();
	return 0;
}
