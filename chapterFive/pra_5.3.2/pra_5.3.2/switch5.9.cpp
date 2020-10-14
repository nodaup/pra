#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	int total = 0;
	for(auto c : a)
		switch (c)
		{
			case 'a':
			case 'i':
			case 'u':
			case 'o':
			case 'e':
				total++;
				break;
			default:
				break;
	}
	cout << total << endl;
}