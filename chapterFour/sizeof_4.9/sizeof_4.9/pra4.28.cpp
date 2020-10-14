#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << sizeof string << endl;
	cout << sizeof(int)<< endl;
	cout << sizeof(short) << endl;
	cout << sizeof(long) << endl;


	cout << "4.29" << endl;
	int x[10];
	int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
}