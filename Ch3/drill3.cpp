#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name!\n";
	string your_name;
	cin >> your_name;
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Please enter one of your friends name!\n";
	string friend_name;
	cin >> friend_name;
	char friend_sex = '0';
	cout << "Please select your friends gender! (male:'m' female:'f')\n";
	cin >> friend_sex;
	cout << "Please enter the age of the recipient!\n";
	int age;
	cin >> age;
	if (age<=0 or age>=110)
		simple_error("you're kidding!");
	cout << "Dear " <<first_name<< ",\n How are you?\nIt's been a long time since we met. I'm starting to miss you.\nHave you seen " <<friend_name<< " lately?\n";
	if (friend_sex == 'm')
		cout <<"If you see "<<friend_name<<" please ask him to call me.\n";
	if (friend_sex == 'f')
		cout <<"If you see "<<friend_name<<" please ask her to call me.\n";
	cout << "I hear you just had a birthday and you are "<<age<< " years old.\n";
	if (age<12)
		cout << "Next year you will be "<<age+1<<".";
	if (age==17)
		cout << "Next year you will be able to vote.";
	if (age>70)
		cout << "I hope you are enjoying retirement.";
	cout << "\nYours sincerely,\n \n"<<your_name<<"\n";
	return 0;
}
