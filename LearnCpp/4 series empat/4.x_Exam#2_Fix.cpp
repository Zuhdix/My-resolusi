#include<iostream>
// Perubahan nama terjadi untuk kejelasan kode
// meminta sebuah nilai
double getDouble()
{
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;

	return x;
}

// meminta simbol aritmatika
char getSymbol()
{
	std::cout << "Enter +, -, *, or /: ";
	char symbol{};
	std::cin >> symbol;
	return symbol;

}

// mencetak hasil
void printResult(double x, char op, double y, double result)
{
	std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';
}

int main()
{

	double x{ getDouble() };
	double y{ getDouble() };
	char op{ getSymbol() };
	
	double result{};

	if (op == '+')
		result = x + y; // Assignment ulang harus pake = (klo pake {} error)
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else
	{
		std::cout << "invalid operator! \n";
		return 1; // keluar dari program
	}

	// Operator valid kode ini di eksekusi
	printResult(x, op, y, result);
	
	return 0;
}
