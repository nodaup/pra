#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> text;
	int c;
	int i = 0;
	while (cin >> c) {
		text.push_back(c);
		cout << text[i];
		++i;
	}
	return 0;
}