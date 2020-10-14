#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	string My_string1, My_string2;
	bool flag = false;
	do
	{
		cin >> My_string1;
		if (My_string1 == My_string2)//出现连续相同的情况，则输出，退出循环
		{
			cout << My_string1 << "重复两次" << endl;
			flag = true;
			break;
		}
		else
			My_string2 = My_string1;
		if (getchar() == '\n')  //遇到回车停下
			break;
	} while (cin);
	if (flag == false)
		cout << "没有重复" << endl;
}