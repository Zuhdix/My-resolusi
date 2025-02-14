#include <iostream>

using namespace std;

int main()
{

	int a = 5;
	
	while(a <= 10){
		cout << "hore "; // jika while terus true maka akan looping terus menerus
		cout << a << endl;  // baris di {} disebut aksi looping
		a += 1; 	// karena ada nilai 1 setiap looping maka akan terjadi false
	}

	cout << "selesai" << endl;

	cin.get();
	return 0;
}
