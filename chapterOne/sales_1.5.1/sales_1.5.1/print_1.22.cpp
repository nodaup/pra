#include "Sales_item.h"
using namespace std;
int main() {
	Sales_item item;
	Sales_item total;
	while (cin >> item) {
		total += item;
	}
	cout << total << endl;
	return 0;
}