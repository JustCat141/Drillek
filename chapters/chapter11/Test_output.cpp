#include "../std_lib_facilities.h"

int main(){
	int birth_year = 2002;

	cout << "decimal:\t" << birth_year << '\n' 
		<< "hexadecimal:\t" << hex << birth_year << '\n' 
		<< "octal:\t\t" << oct << birth_year << dec << endl;

	cout << "age:\t\t" << 19 << endl;

	cout << "\nprevs with base:" << endl;

	cout << "decimal:\t" << showbase << birth_year << '\n' 
		<< "hexadecimal:\t" << hex << birth_year << '\n' 
		<< "octal:\t\t" << oct << birth_year << dec << endl << endl;

	int a, b, c, d;

	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout << "\ndef:\t\t" << 1234567.89 << '\n' 
		<< "fixed:\t\t" << fixed << 1234567.89 << '\n' 
		<< "scientific:\t" << scientific << 1234567.89 << endl << endl;

	cout << '|' << setw(12) << "sample1" << '|' << setw(12) << "sampfor1"
		 << '|' << setw(30) << "sample.first1@terminal.com"
		 << '|' << setw(18) << "+30 12 345-6789 |" << endl
		 << '|' << setw(12) << "firstname1" << '|' << setw(12) << "forname1"
		 << '|' << setw(30) << "first.name1@terminal.com" 
		 << '|' << setw(18) << "+30 69 420-2021 |" << endl
		 << '|' << setw(12) << "name122" << '|' << setw(12) << "forname"
		 << '|' << setw(30) << "name122for@terminal.com"
		 << '|' << setw(18) << "+30 30 303-0303 |" << endl;

	return 0;
}