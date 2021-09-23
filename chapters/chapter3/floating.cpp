#include "std_lib_facilities.h"

int main() {

	cout << "Kérlek adj meg egy n valós számot! | n = ";
	
	double n = 0;
	cin >> n;
	
	cout << "n = " << n << endl
		 << "n + 1 = " << n+1 << endl
		 << "n * 2 = " << n*2 << endl
		 << "n * 3 = " << n*3 << endl		 
		 << "n / 2 = " << n/2 << endl
		 << "n ^ 2 = " << n*n << endl
		 << "n gyöke = " << sqrt(n) << endl;
		 	
	return 0;
}
