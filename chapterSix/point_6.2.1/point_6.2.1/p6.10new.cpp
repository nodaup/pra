#include <iostream>
#include <string>
#include <vector>
using namespace std;

int exchange(int& val1, int& val2)//���������������壬����������������Ҫ�Դ�ַ�ķ�ʽ����(����)
{
	int a;
	a = val1;
	val1 = val2;
	val2 = a;
	return 0;
}
void main()
{
	cout << "��������Ҫ������������:";
	int val1, val2;
	cin >> val1 >> val2;
	cout << "����֮ǰ��������" << val1 << " " << val2 << endl;
	exchange(val1, val2);
	cout << "����֮���������" << val1 << " " << val2 << endl;
}