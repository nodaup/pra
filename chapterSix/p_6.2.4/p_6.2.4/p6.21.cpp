#include <iostream>
#include <string>
#include <vector>
using namespace std;

int My_compare(int a, int* b)//���������������壬��������������һ��Ϊ����һ��Ϊָ��
{
	if (a >= *b)
	{
		return a;
	}
	else
	{
		return *b;
	}

}
void main()
{
	cout << "��������������:";
	int val1, val2;
	cin >> val1 >> val2;
	int* val2_pointer = &val2;//��val2�ĵ�ַ������Ӧָ��
	cout << "�ϴ����Ϊ��" << My_compare(val1, val2_pointer) << endl;