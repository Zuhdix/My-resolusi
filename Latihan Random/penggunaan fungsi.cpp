// kode sendiri
#include<iostream>

int tambah(int a, int b)
{
	return a + b;
}

double celsiusToFahrenheit()
{
	double C{};
	std::cin >> C;
	double F{ C * 9 / 5 + 32 };

	return F;
}

int main()
{
	std::cout << tambah(2, 7) << '\n';
	std::cout << tambah(9, 3) << '\n';

	std::cout << "Masukkan Suhu: ";
	std::cout << celsiusToFahrenheit();

	return 0;
}
