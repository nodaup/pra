#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<char> cla= { 'E','D','C','B','A' };
	int grade;
	cin >> grade;
	if (grade == 100)
		cout << "perfect!" << endl;
	else {
		cout << cla[grade / 10 - 5];
	}
}