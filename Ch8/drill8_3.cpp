#include "std_lib_facilities.h"

namespace X 
{
	double var;

	void print()
	{
		cout << "X= " << var << "\n";
	}
}
namespace Y 
{
	double var;

	void print()
	{
		cout << "Y= " << var << "\n";
	}
}

namespace Z 
{
	double var;

	void print()
	{
		cout << "Z= " << var << "\n";
	}
}

int main()
{
	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();
	return 0;
}