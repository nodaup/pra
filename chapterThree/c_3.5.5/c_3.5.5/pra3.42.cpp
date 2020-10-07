#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> vt = { 1,2,3 };
	int arr[3];
	int i = 0;
	for (auto c : vt) {
		arr[i] = c;
		++i;
	}
	for (int* i = begin(arr); i != end(arr); ++i)
		cout << *i;
}