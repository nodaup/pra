#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
	for (auto &c : vec)
		(c % 2 == 1) ?  c *= 2 : c = c;
	for (auto c : vec)
		cout << c  << " ";
}