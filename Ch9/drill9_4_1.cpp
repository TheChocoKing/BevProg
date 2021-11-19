#include "std_lib_facilities.h"

struct Date
{
	int y = 1978;
	int m = 6;
	int d = 25;
};

Date today;
Date added;

void init_day(Date& dd, int y, int m, int d)
{
	if (y < 0)
		error("Invalid year.");
	if (m < 1 || m > 12)
		error("Invalid month.");
	if (d < 1 || d > 31)
		error("Invalid day.");

	dd.y = y;
	dd.m = m;
	dd.d = d;

}

void add_day(Date dd, Date& dd_copy, int n)
{
	dd_copy = dd;
	dd_copy.d += n;
	if (dd_copy.d > 31)
	{
		dd_copy.m++;
		dd_copy.d -= 31;
		if (dd_copy.m > 12)
		{
			dd_copy.y++;
			dd_copy.m -= 12;
		}
	}
	
}

ostream& operator<<(ostream& os, const Date& d)
{
 return os << d.y << "." << d.m << "." << d.d << "\n";
}

int main()
try
{

	init_day(today, 2021, 12, 31);
	add_day(today, added, 4);
	cout << "Today: " << today;
	cout << "Added day: " << added;
	return 0;

}
catch(const exception& e)
{
	cerr << e.what() << '\n';
	return 1;
}

	
