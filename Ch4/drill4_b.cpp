#include "std_lib_facilities.h"

int main()
{
	vector<double>values;
	double value = 0;
	double high = 0;
	double small = 0;
	double sum = 0;
	string unit;
	constexpr double inch_cm = 2.54;
	constexpr double ft_inch = 12;
	constexpr double m_cm = 100;
	cout <<"Adjon meg egy értéket és egy mértékegységet (cm, m, in, ft). (Kilépéshez:'|')\n";
	while (cin >>value >>unit){
		if (unit == "m"){
			values.push_back(value);
			}
		if (unit == "cm"){
			value = value/m_cm;
			values.push_back(value);
			}
		if (unit == "in"){
			value = value*inch_cm;
			value = value/m_cm;
			values.push_back(value);
			}
		if (unit == "ft"){
			value = value*ft_inch;
			value = value*inch_cm;
			value = value/m_cm;
			values.push_back(value);
			}
		if (unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons"){
			cout <<"Nem megfelelő mértékegység.\n";
			}
		if (unit == ""){
			cout <<"Nincs megadva mértékegység.\n";
			}
		if (small == 0 && high == 0){
			small = value;
			high = value;
			}
		if (value <= small){
			cout <<"Eddigi legkisebb.\n";
			small = value;
			}
		if (value >= high){
			cout <<"Eddigi legnagyobb.\n";
			high = value;
			}
	}
	for (double x : values) sum +=x;
	cout <<"Értékek: ";
	sort(values);
	for (double x : values) cout <<x <<" m, ";
	cout <<"\nA legkisebb érték: " <<small <<" m\n" <<"A legnagyobb érték: " <<high <<" m\n";
	cout <<"Az értékek darabszáma: " <<values.size() <<" db\n";
	cout <<"Az értékek összege: " <<sum <<" m\n";
	return 0;
}

