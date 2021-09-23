#include "std_lib_facilities.h"

int main(){

	cout << "Enter the name of the person you want to write to: ";
	string first_name;
	cin >> first_name;
    cout << endl;
	
	cout << "Dear " << first_name << "," << "\n";
	cout << "How are you? I'm fine if you'd ask. I haven't seen you in ages. I hope you are well. \n";

	cout << "Enter your friend's name: ";
	string friend_name;
	cin >> friend_name;
    cout << endl;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Enter your friend's gender. Male = m | Female = f ";
    char friend_sex = 0;
	cin >> friend_sex;
    cout << endl;

	if (friend_sex == 'm')
    {
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
    {
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "Enter the recipient's age: ";
	int age;
	cin >> age;
    cout << endl;

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age <= 0 || age >= 110 ){
		simple_error("you're kidding!");
	}

	if (age < 12)
    {
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	else if (age == 17)
    {
		cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70)
    {
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours sincerely,\n\n\n";
	cout << "Patrik\n";

	return 0;
}