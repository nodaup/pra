#include<iostream>
#include<string>
#include<vector>
using namespace::std;
int main()
{
	int word;

	vector<int> str;
	while (cin >> word)
	{
		str.push_back(word);
	}
	int sum = 0;
	for (decltype(str.size()) i = 0; i != (str.size() + 1) / 2; ++i)
	{
		if (i != str.size() - i - 1)
			sum = str[i] + str[str.size() - i - 1];
		else
			sum = str[i];
		cout << sum << endl;
	}

	system("pause");
	return 0;

}