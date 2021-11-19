#include "std_lib_facilities.h"

class Date
{
private:
    int y, m, d;
public:
    Date(int y, int m, int d); 
    void add_day(int n); 
    
    int month() { return m; }
    int day() { return d; }
    int year() { return y; }
};

Date today(2021, 11, 19);
Date added(today);

Date::Date(int y, int m, int d)
{
	if (y < 0)
		error("Invalid year.");
	if (m < 1 || m > 12)
		error("Invalid month.");
	if (d < 1 || d > 31)
		error("Invalid day.");

	Date::y = y;
	Date::m = m;
	Date::d = d;

}

void Date::add_day(int n)
{
	d += n;
	if (d > 31)
	{
		m++;
		d -= 31;
		if (m > 12)
		{
			y++;
			m -= 12;
		}
	}
	
}

ostream& operator<<(ostream& os, Date& d)
{
 return os << d.year() << "." << d.month() << "." << d.day() << "\n";
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

	
