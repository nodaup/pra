#include<string>
#include <iostream>
using namespace std;
int main() {
	string line1;
	string line2;
	getline(cin, line1);
	getline(cin, line2);
	cout << line1 +" " +line2 << endl;
	return 0;
}