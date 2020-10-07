#include <vector>
using namespace std;
int main() {
	const int sz = 10;
	vector<int> ia, ib;
	for (int i = 0; i != sz; ++i)
		ia.push_back(i);
	for (auto it = ia.begin(); it != ia.end(); ++it)
		ib.push_back(*it);
}