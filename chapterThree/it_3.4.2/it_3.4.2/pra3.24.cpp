#include<iostream>
#include<string>
#include<vector>
//#include <ctype.h>
using namespace::std;
int main()
{
	int n;
	vector<int> num;
	decltype(num.size()) sum = 0;
	while (cin >> n)
	{
		num.push_back(n);
	}
	for (auto a = num.begin(), b = num.end() - 1, m = a + (b - a + 1) / 2; a != m; a++, b--)
	{
		sum = *a + *b;
		cout << sum << endl;
	}

	system("pause");
	return 0;

}