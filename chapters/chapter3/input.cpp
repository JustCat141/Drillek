#include "std_lib_facilities.h"

int main(){

	cout << "Add meg a teljes neved és az életkorod! (Veznev. Kernev. Kor) = ";
	
	string veznev, kernev;
	int kor;
	cin >> veznev >> kernev >> kor; 
	
	
	string nev = veznev +" "+ kernev;
	
	cout << "Üdvözöllek, " << nev << " (kor: " << kor << ")!\n";

	return 0;
}
