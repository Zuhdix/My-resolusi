#include<iostream>

int doubleNumber(int x)
{	
	return 2 * x;
}

int getValueFromUser()
{
	std::cout << "enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int main()
{
	int number{ getValueFromUser() };  //menyimpan kode di number
	std::cout << doubleNumber(number); //number di salin ke doubleNumber kemudian dijalankan oleh fungsi tsb

	return 0;
}
