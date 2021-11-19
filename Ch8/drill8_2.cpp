#include "std_lib_facilities.h"


void swap_v(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << " b=" << b << "\n";
}

void swap_r(int& a,int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << " b=" << b << "\n";
}

void swap_cr(const int& a,const int& b)
{
	int temp;
	int temp2;
 	temp = a;
 	temp2 = b;

 	swap_r(temp, temp2);
}

int main()
{
	int x = 7;
	int y = 9;
	swap_r(x,y);
	swap_cr(7,9);

	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);
	swap_cr(7.7,9.9);

	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);
	swap_cr(7.7,9.9);
}