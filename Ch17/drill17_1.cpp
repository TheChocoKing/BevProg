#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
    cout << "\n";
    for (int i=0; i<10; i++)
        cout << i << ".value: " << a[i] << "\t Address:" << &a[i] << "\n";
}

void print_array(ostream& os, int* a, int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << i << ".value: " << a[i] << "\t Address:" << &a[i] << "\n";
}

void print_vector(vector<int*> v)
{
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << i << ".value: " << *v[i] << "\t Address:" << v[i] << "\n";
}

int* init_array(int n)
{
	int* a = new int[n];
	int counter = 100;
	for (int i = 0; i < n; ++i)
		a[i] = counter++;

	return a;
}

vector<int*> init_vector(int n)
{
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{counter++});
	
	return temp;
}

void delete_vector(vector<int*> v)
{
    for (int i = 0; i < v.size(); ++i)
        delete[] v[i];
}

int main()
{
    int* ten = new int[10];
    for (int i=0; i<10; i++)
        cout << i << ".value: " << ten[i] << "\t Address:" << &ten[i] << "\n";
    //delete[] ten;

    print_array10(cout, ten);
    delete[] ten;

    int* ten2 = new int[10]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    print_array10(cout, ten2);
    delete[] ten2;
    
    int* eleven = new int[11]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    print_array(cout, eleven, 11);
    delete[] eleven;

    int* twenty = init_array(20);
    print_array(cout, twenty, 20);
    delete[] twenty;

    //vector:

    vector<int*>ten_v = init_vector(10);
    print_vector(ten_v);
    delete_vector(ten_v);
    
    vector<int*>eleven_v = init_vector(11);
    print_vector(eleven_v);
    delete_vector(eleven_v);

    vector<int*>twenty_v = init_vector(20);
    print_vector(twenty_v);
    delete_vector(twenty_v);
    
    return 0;
}