// point_2.3.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int* p = 0;
	int i = 20;
	p = &i;
	cout << i << endl;
	cout << *p << endl;
	*p = 10;
	cout << *p <<endl;
	cout << i << endl;
}

