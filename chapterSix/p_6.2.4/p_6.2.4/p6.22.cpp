
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int My_swap(int*& a, int*& b)//函数的声明及定义，接受两个指针参数
{
	int* c = NULL; //作为中间指针
	c = a;
	a = b;
	b = c;
	return 0;
}
void main()
{
	cout << "请输入两个整数:";
	int val1, val2;
	cin >> val1 >> val2;
	int* val1_pointer = &val1;//将val2的地址赋给对应指针
	int* val2_pointer = &val2;//将val2的地址赋给对应指针
	cout << "交换之前两指针所指对象：" << *val1_pointer << *val2_pointer << endl;
	My_swap(val1_pointer, val2_pointer);
	cout << "交换之后两指针所指对象：" << *val1_pointer << *val2_pointer << endl;
}