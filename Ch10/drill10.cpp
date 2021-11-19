#include "std_lib_facilities.h"

struct Point
{
	Point(double xcoord, double ycoord): x(xcoord), y(ycoord) {}
	double x, y;
};

vector<Point>original_points;
vector<Point>processed_points;
ofstream ost{"mydata.txt"};
ifstream ist{"mydata.txt"};

ostream& operator<<(ostream& os, const vector<Point>& p)
{
	int i;
 	for (i = 0; i < p.size(); ++i)
	os << i+1 <<": (" << p[i].x << "," << p[i].y << ") \n";
	return os;
}

ifstream& operator>>(ifstream& is, vector<Point>& p)
{
	double x, y;
	int i;
	for (i = 0; i < original_points.size(); ++i)
	{
		is >> x >> y;
		p.push_back(Point(x,y));
	}
	return is;
}
int main()
{
	double x, y;
	int i;
	cout << "Please enter 7 points (x,y):" << "\n";
	for (int i = 0; i < 7; ++i)
 	{
  		cout << "X coordinate: "; cin >> x;
  		cout << "Y coordinate: "; cin >> y;
  		original_points.push_back(Point(x, y));
	}
	cout << original_points;
	ost << original_points;

	ist >> processed_points;
	cout << processed_points;
	
	if (original_points.size() != processed_points.size())
		cout << "Something's wrong!" << "\n";
	
	for (i == 0; i < original_points.size(); ++i)
	{
		if ((original_points[i].x != processed_points[i].x) || (original_points[i].y != processed_points[i].y))
			cout << "Something's wrong!" << "\n";
	}
return 0;
}
