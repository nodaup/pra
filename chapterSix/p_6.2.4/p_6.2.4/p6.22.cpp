
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int My_swap(int*& a, int*& b)//���������������壬��������ָ�����
{
	int* c = NULL; //��Ϊ�м�ָ��
	c = a;
	a = b;
	b = c;
	return 0;
}
void main()
{
	cout << "��������������:";
	int val1, val2;
	cin >> val1 >> val2;
	int* val1_pointer = &val1;//��val2�ĵ�ַ������Ӧָ��
	int* val2_pointer = &val2;//��val2�ĵ�ַ������Ӧָ��
	cout << "����֮ǰ��ָ����ָ����" << *val1_pointer << *val2_pointer << endl;
	My_swap(val1_pointer, val2_pointer);
	cout << "����֮����ָ����ָ����" << *val1_pointer << *val2_pointer << endl;
}