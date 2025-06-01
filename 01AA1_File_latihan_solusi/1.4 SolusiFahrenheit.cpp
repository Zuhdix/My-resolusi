#include <iostream>
using namespace std;

int main() {

	double fahrenheit{};
	cout << " Masukkan suhu fahrenheit: ";
	cin >> fahrenheit;

	double celsius{ (fahrenheit - 32)/ 1.8}; // rumus dari video
	cout << " Suhu dalam Celsius: " << celsius << '\n';

	return 0;
}
