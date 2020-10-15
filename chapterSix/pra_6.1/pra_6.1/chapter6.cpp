#include <iostream>
using namespace std;
#include"chapter6.h"

int func(int val) {
	if (val > 0)
		return val;
	else
		return -val;
}

int main() {
	int val;
	cin >> val;
	cout << func(val) << endl;
}

int func()
{
	return 0;
}
