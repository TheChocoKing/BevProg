/* 1.
#include "std_lib_facilities.h"
 int main()
	try {
		cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 2.
#include "std_lib_facilities.h"
 int main()
	try {
		cout << " Success!\n";
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 3.
#include "std_lib_facilities.h"
 int main()
	try {
		cout << " Success " << "!\n ";
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 4.
#include "std_lib_facilities.h"
 int main()
	try {
		cout <<" Success! "<< '\n';
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 5.
#include "std_lib_facilities.h"
 int main()
	try {
		int res = 7; vector<int> v(10); v[5] = res; cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 6.
#include "std_lib_facilities.h"
 int main()
	try {
		vector<int> v(10); v[5] = 7; if (v[5]==7) cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 7.
#include "std_lib_facilities.h"
 int main()
	try {
		if (true) cout << " Success!\n " ; else cout << " Fail!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 8.
#include "std_lib_facilities.h"
 int main()
	try {
		bool c = true; if (c) cout << " Success!\n " ; else cout << " Fail!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 9.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " ape " ; bool c = " fool " >s; if (c) cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 10.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " ape " ; if (s!= " fool " ) cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 11.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " ape " ; if (s!= " fool " ) cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 12.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " ape " ; if (s!= " fool " ) cout << " Success!\n " ;
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 13.
#include "std_lib_facilities.h"
 int main()
	try {
		vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 14.
#include "std_lib_facilities.h"
 int main()
	try {
		vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 15.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " Success!\n " ; for (int i=0; i<s.size(); ++i) cout << s[i];
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 16.
#include "std_lib_facilities.h"
 int main()
	try {
		if (true) cout << " Success!\n " ; else cout << " Fail!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 17.
#include "std_lib_facilities.h"
 int main()
	try {
		int x = 2000; int c = x; if (c==2000) cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 18.
#include "std_lib_facilities.h"
 int main()
	try {
		string s = " Success!\n " ; for (int i=0; i<10; ++i) cout << s[i];
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 19.
#include "std_lib_facilities.h"
 int main()
	try {
		vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 20.
#include "std_lib_facilities.h"
 int main()
	try {
		int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 21.
#include "std_lib_facilities.h"
 int main()
	try {
		double x = 2; double d = 5/(x-1); if (d==2*(x+0.5)) cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 22.
#include "std_lib_facilities.h"
 int main()
	try {
		vector<string> s; s.push_back("Success!\n"); for (int i = 0; i < s.size(); ++i) cout << s[i];
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
/*

/* 23.
#include "std_lib_facilities.h"
 int main()
	try {
		int i=0; int j=9; while (i<10) ++i; if (j<i) cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

 /* 24.	
#include "std_lib_facilities.h"
 int main()
	try {
		double x = 2; double d = 5/(x-1); if (d=2*(x+0.5)) cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
*/

/* 25.
#include "std_lib_facilities.h"
 int main()
	try {
		cout << " Success!\n " ;
		return 0;
	}
	catch (exception&e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}	
*/	
	
