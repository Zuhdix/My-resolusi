#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double resultBawah{ floor(1.2) };
	cout << resultBawah << '\n';

	double resultAtas{ ceil(1.2) };
	cout << resultAtas << '\n';

	double resultPangkat{ pow(2,3) };
	cout << resultPangkat << '\n';

	return 0;
}
