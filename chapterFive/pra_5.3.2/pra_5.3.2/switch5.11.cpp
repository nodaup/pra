
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	char cval;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0, sum_space = 0, sum_table = 0, sum_newline = 0;
	while (cin >> std::noskipws >> cval) // 此处的std::noskipws表示的是不忽略任何地方的空白（包括制表符和空格等）
	{
		switch (cval)
		{
		case 'a':
		case 'A':
			++char_a;
			break;
		case 'e':
		case 'E':
			++char_e;
			break;
		case 'i':
		case 'I':
			++char_i;
			break;
		case 'o':
		case 'O':
			++char_o;
			break;
		case 'u':
		case 'U':
			++char_u;
			break;
		case ' ':
			++sum_space;
			break;
		case '\t':
			++sum_table;
			break;
		case '\n':
			++sum_newline;
			break;
		}
	}
	cout << "元音字母a的个数为：" << char_a << endl;
	cout << "元音字母e的个数为：" << char_e << endl;
	cout << "元音字母i的个数为：" << char_i << endl;
	cout << "元音字母o的个数为：" << char_o << endl;
	cout << "元音字母u的个数为：" << char_u << endl;
	cout << "空格的个数为：" << sum_space << endl;
	cout << "制表符的个数为：" << sum_table << endl;
	cout << "换行符的个数为：" << sum_newline << endl;
}