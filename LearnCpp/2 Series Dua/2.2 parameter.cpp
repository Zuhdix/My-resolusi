#include<iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value)
{
	std::cout << value << " Double is " << value * 2 << '\n';
}


int main()
{
	int num{ getValueFromUser() }; // meminta user memasukkan nilai

	printDouble(num); // nilai disalin ke num trus dijalankan ke fungsi printDouble

	return 0;
}
