#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	getline(cin, str);

	for (auto &c : str) {
		if (!ispunct(c))
			cout << c;
	}

}