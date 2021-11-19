#include "std_lib_facilities.h"

struct Date
{
    int year, month, day;
    Date(int y, int m, int d); 
    void add_day(int n); 
};

Date today(2021,11,19);
Date added(today);

Date::Date(int y, int m, int d)
{
	if (y < 0)
		error("Invalid year.");
	if (m < 1 || m > 12)
		error("Invalid month.");
	if (d < 1 || d > 31)
		error("Invalid day.");

	year = y;
	month = m;
	day = d;

}

void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
	
}

ostream& operator<<(ostream& os, const Date& d)
{
 return os << d.year << "." << d.month << "." << d.day << "\n";
}

int main()
try
{
    added.add_day(4);
	cout << "Today: " << today;
	cout << "Added day: " << added;
	return 0;

}
catch(const exception& e)
{
	cerr << e.what() << '\n';
	return 1;
}

	
