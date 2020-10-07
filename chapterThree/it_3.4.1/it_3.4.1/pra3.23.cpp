#include<iostream>
#include<string>
#include<vector>
//#include <ctype.h>
using namespace::std;
int main()
{
	vector<int> num{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto i = num.begin(); i != num.end(); ++i)
	{
		*i = (*i) * 2;
		cout << *i << endl;
	}


	system("pause");
	return 0;

}