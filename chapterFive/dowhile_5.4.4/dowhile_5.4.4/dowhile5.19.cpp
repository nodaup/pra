
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	do
	{
		string My_string1, My_string2;
		cout << "请输入两个字符串" << endl;
		cin >> My_string1 >> My_string2;
		if (My_string1.size() > My_string2.size())
		{
			cout << My_string2 << endl;
		}
		else
		{
			cout << My_string1 << endl;
		}
	} while (cin);//第18题中就有的很好的例子
}