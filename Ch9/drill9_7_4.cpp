#include "std_lib_facilities.h"

enum class Month
{
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
    m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
    return m;
}

class Date
{
public:
    Date(int y, Month m, int d); 
    void add_day(int n);
    void add_month(int n);
    void add_year(int n); 
    
    Month month() const { return m; }
    int day() const { return d; }
    int year() const { return y; }
private:
    int y;
    Month m;
    int d;
};

Date today(2021, Month::apr, 10);
Date added(today);

Date::Date(int y, Month m, int d)
{
	if (y < 0)
		error("Invalid year.");
	if ((int(m) < 1) || (int(m) > 12))
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
		++m;
		d -= 31;
		if (m == Month::jan)
		{
			y++;
		}
	}
	
}

void Date::add_month(int n)
{
    for (int i = 0; i < n; ++i)
	{
        ++m;
        if (m == Month::jan)
		{
			y++;
		}
    }

	
}

void Date::add_year(int n)
{
    y += n;
}

ostream& operator<<(ostream& os, Date& d)
{
 return os << d.year() << "." << int(d.month()) << "." << d.day() << "\n";
}

int main()
try
{
    added.add_day(4);
    added.add_month(2);
    added.add_year(5);
	cout << "Today: " << today;
	cout << "Modified date: " << added;
	return 0;

}
catch(const exception& e)
{
	cerr << e.what() << '\n';
	return 1;
}

	
