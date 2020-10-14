
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	char cval, char_before = '\0'; //计算机中的0值表示的为'\0',可防止它的初始值(随机的)碰巧是某个字符的值.
	int sum_ff = 0, sum_fl = 0, sum_fi = 0;
	while (cin >> std::noskipws >> cval) // 此处的std::noskipws表示的是不忽略任何地方的空白（包括制表符和空格等）
	{
		switch (cval)
		{
		case 'f':
			if (char_before == 'f')
			{
				++sum_ff;
			}
			break;
		case 'l':
			if (char_before == 'f')
			{
				++sum_fl;
			}
			break;
		}
		char_before = cval;//将当前的字符赋给char_before，作为下次判断的依据
		//如果下次判断中char_before为f字符，那么只要再判断当前字符是否为f、l、i即可
	}
	cout << "字符序列ff的个数为：" << sum_ff << endl;
	cout << "字符序列fl的个数为：" << sum_fl << endl;
	cout << "字符序列fi的个数为：" << sum_fi << endl;
}