#include <iostream>

using namespace std;

int main(){
	
	int i = 0;
	while(i <= 10){
		i++;
		if(i == 5){ // increment di tambahkan sebelum if agar looping berjalan khusus untuk while
			continue;
			//break;
		}
		cout << i << endl;
		// jika i++ berada disini continue akan stack di 4
    // masalah terjadi untuk while, untuk for tida bermasalah
	}

	cout << "akhirnya" << endl; 

	cin.get();
	return 0;
}
