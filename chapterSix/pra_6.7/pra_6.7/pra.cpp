
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }//�������庯��

int main(int argc, char** argv)
{
	typedef int(*p)(int a, int b);	//��������ָ�룬δ��ʼ��,pΪָ������ָ�롣ʹ��typedef��������䶨��Ĳ����Ǳ����������ͱ���
	//���ǽ�����ת��Ϊ���ͱ�����һ�ַ�ʽ��pԭ����ָ������ָ����������ڱ����ָ������ָ����������ͱ���
	vector<p> vec{ add, subtract, multiply, divide };//vector��ʼ����C++11������
	for (auto f : vec)
		cout << f(2, 2) << endl;
	return 0;
}