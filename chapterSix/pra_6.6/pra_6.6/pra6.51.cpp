#include <iostream>
#include<string>
#include<vector>
using namespace std;
void f()
{
	cout << "f()" << endl;
}
void f(int)
{
	cout << "f(int)" << endl;
}
void f(int, int)
{
	cout << "f(int, int)" << endl;
}
void f(double, double = 3.14)
{
	cout << "f(double,double = 3.14)" << endl;
}
int calc(int&) {
	return 0;
}
int calc(const int&) {
	return 1;
}
int main(int argc, char** argv)
{
	f(2, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);

	const int a = 5;
	int b = 5;
	cout << calc(a) << endl; //1
	cout << calc(b) << endl; //0
	return 0;
}