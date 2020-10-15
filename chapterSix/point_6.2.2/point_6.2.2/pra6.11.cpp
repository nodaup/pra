#include <iostream>
using namespace std;

void work(int& b) {
	b *= b;
}

int main() {
	int a = 2;
	int &b = a;
	work(b);
	cout << a << endl;
	cout << b << endl;
}