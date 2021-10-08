#include "std_lib_facilities.h"

int main()
{
	double a;
	double b;
	cout <<"Adjon meg két értéket. (Kilépéshez:'|')\n";
	while (cin >> a and cin >> b) {
		cout << a << ", " << b <<"\n";
		if (a<b)
			cout <<"A kisebb érték: " <<a <<"\nA nagyobb érték: " <<b <<"\n";
		if (a>b)
			cout <<"A kisebb érték: " <<b <<"\nA nagyobb érték: " <<a <<"\n";
		if (a==b)
			cout <<"A két érték egyenlő.\n";
		if (abs(a-b<0.01))
			cout <<"A két érték majdnem egyenlő.\n";
	}	
	return 0;
}
