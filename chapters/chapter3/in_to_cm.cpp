#include "std_lib_facilities.h"

void szamolas()
{
	double c_to_i = 2.54;
	
	double x = 0;
	char merte = 0;
	// Ez lesz a mertekegyseg (cm vagy inch)
	
	cin >> x >> merte;
	
	switch (merte)
	{
		case 'c':
			cout << x << " cm = " << x / c_to_i << "inch.";
			break;
		case 'i':
			cout << x << " inch = " << x * c_to_i << "cm.";
			break;
		default:
			cout << "Nemlétező mértékegységet adtál meg!\n" <<
			"Próbáld meg a következőképpen: \"szám mértékegység (c/i)\"! ";
			szamolas();
	}
}

int main()
{
	cout << "Adj meg egy hossz értéket inch vagy cm értékben! | (szam [c/i]) = ";
		
	szamolas();
	
	cout << endl;
	return 0;
}
